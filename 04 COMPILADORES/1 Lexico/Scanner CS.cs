using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

enum Estado
{
    q0, q1, q2, q3, q4, q5, q6, q7, q8, q9,
    q10, q11, q12, q13, q14, q15, ERROR
}

class TS
{
    public string Lexema { get; set; }
    public string TipTok { get; set; }
    public int NumTok { get; set; }
    public TS Sig { get; set; }
}

class AnalizadorLexico
{
    private static TS ini = null, fin = null;
    private static int contador = 1;

    private static readonly string[] palabrasReservadas =
    {
        "auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern",
        "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return", "short", "signed",
        "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Bool",
        "_Complex", "_Imaginary", "_Atomic", "_Generic", "_Noreturn", "_Static_assert", "_Thread_local"
    };

    private static void AgregaTS(string lex, string tito, int ntok)
    {
        TS aux = new TS { Lexema = lex, TipTok = tito, NumTok = ntok, Sig = null };
        if (ini == null)
            ini = fin = aux;
        else
        {
            fin.Sig = aux;
            fin = aux;
        }
    }

    private static void ImprimeTS()
    {
        Console.WriteLine("\nTabla de Símbolos.");
        Console.WriteLine("------------------------------------------------------");
        Console.WriteLine(" No. | Lexema               | Tipo");
        Console.WriteLine("------------------------------------------------------");

        TS aux = ini;
        while (aux != null)
        {
            Console.WriteLine($" {aux.NumTok,-3} | {aux.Lexema,-20} | {aux.TipTok,-20}");
            aux = aux.Sig;
        }
        Console.WriteLine("------------------------------------------------------");
    }

    private static bool EsPalabraReservada(string cadena)
    {
        return palabrasReservadas.Contains(cadena.ToLower());
    }

    private static void ClasificarCadena(string cadena)
    {
        Estado estado = Estado.q0;
        int posicion = 0;
        while (posicion < cadena.Length)
        {
            char c = cadena[posicion];
            switch (estado)
            {

                case Estado.q0:
                    if (c == '+' || c == '-') estado = Estado.q1;
                    else if (char.IsDigit(c)) estado = Estado.q2;
                    else if (c == '*' || c == '/' || c == '%') estado = Estado.q12;
                    else if (c == '>' || c == '<') estado = Estado.q9;
                    else if (c == '=') estado = Estado.q11;
                    else if (char.IsLetter(c)) estado = Estado.q8;
                    else if (c == '&') estado = Estado.q13;
                    else if (c == '|') estado = Estado.q15;
                    else if (c == '!') estado = Estado.q14;
                    else estado = Estado.ERROR;
                    break;




                case Estado.q1:
                    if (char.IsDigit(c)) estado = Estado.q2;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q2:
                    if (char.IsDigit(c)) estado = Estado.q2;
                    else if (c == '.') estado = Estado.q3;
                    else estado = Estado.ERROR;
                    break;


                case Estado.q3:
                    if(char.IsDigit(c)) estado = Estado.q4;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q4:
                    if (char.IsDigit(c)) estado = Estado.q4;
                    else if (c == 'E' || c == 'e') estado = Estado.q5;
                    else estado = Estado.ERROR;
                    break;




                case Estado.q5:
                    if (c == '+' || c == '-') estado = Estado.q6;
                    else estado = Estado.ERROR;
                    break;




                case Estado.q6:
                    if (char.IsDigit(c)) estado = Estado.q7;
                    else estado = Estado.ERROR;
                    break;




                case Estado.q7:
                    if (char.IsDigit(c)) estado = Estado.q7;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q8:
                    if (char.IsLetterOrDigit(c)) estado = Estado.q8;
                    else estado = Estado.ERROR;
                    break;




                case Estado.q9:
                    if (c == '=') estado = Estado.q10;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q10:
                    estado = Estado.ERROR;
                    break;


                case Estado.q11:
                    if (c == '=') estado = Estado.q10;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q12:
                    if (c == '+' || c == '-') estado = Estado.q13;
                    else if (char.IsDigit(c)) estado = Estado.q14;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q13:
                    if (c == '&') estado = Estado.q14;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q14:
                    if (c == '=') estado = Estado.q10;
                    else estado = Estado.ERROR;
                    break;



                case Estado.q15:
                    if (c == '|') estado = Estado.q14;
                    else estado = Estado.ERROR;
                    break;



                default:
                    estado = Estado.ERROR;
                    break;
            }
            posicion++;
        }

        if (estado == Estado.q8)
        {
            AgregaTS(cadena, EsPalabraReservada(cadena) ? "PR" : "ID", contador++);
        }
        else if (estado == Estado.q2) AgregaTS(cadena, "NE", contador++);
        else if (estado == Estado.q4) AgregaTS(cadena, "ND", contador++);
        else if (estado == Estado.q7) AgregaTS(cadena, "NX", contador++);
        else if ((estado == Estado.q12) || (estado == Estado.q1)) AgregaTS(cadena, "OA", contador++);
        else if ((estado == Estado.q10) || (estado == Estado.q9)) AgregaTS(cadena, "OR", contador++);
        else if (estado == Estado.q14) AgregaTS(cadena, "OL", contador++);
        else AgregaTS(cadena, "ERROR", contador++);
    }

    static void Main()
    {
        Console.Write("Ingrese el nombre del archivo: ");
        string nombreArchivo = Console.ReadLine();

        if (!File.Exists(nombreArchivo))
        {
            Console.WriteLine("Error al abrir el archivo.");
            return;
        }

        foreach (var linea in File.ReadLines(nombreArchivo))
        {
            foreach (var token in linea.Split(new[] { ' ', '\t', '\n' }, StringSplitOptions.RemoveEmptyEntries))
            {
                ClasificarCadena(token);
            }
        }

        ImprimeTS();
    }
}
