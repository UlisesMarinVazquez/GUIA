#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definimos los estados del automata
typedef enum
{
    q0, q1, q2, q3, q4, q5, q6, q7, q8, q9,
    q10, q11, q12, q13, q14, q15, ERROR
} Estado;

// Definición de la estructura de la lista 
typedef struct TS
{
    char Lexema[50]; // Lexema
    char TipTok[30]; // Tipo de Token
    int num_Tok;     // Número de Token
    struct TS *sig;  // Apuntador al siguiente nodo
} TS;

// Punteros globales para la lista
TS *ini = NULL, *fin = NULL;
int contador = 1; // Contador para el número de tokens

// Función para agregar un nodo a la lista 
void Agrega_TS(char Lex[20], char tito[3], int ntok)
{
    TS *aux;

    if (ini == NULL)
    {
        ini = (TS *)malloc(sizeof(TS));
        strcpy(ini->Lexema, Lex);
        strcpy(ini->TipTok, tito);
        ini->num_Tok = ntok;
        ini->sig = NULL;
        fin = ini;
    }
    else
    {
        aux = (TS *)malloc(sizeof(TS));
        strcpy(aux->Lexema, Lex);
        strcpy(aux->TipTok, tito);
        aux->num_Tok = ntok;
        aux->sig = NULL;
        fin->sig = aux;
        fin = aux;
    }
}

// Función para recorrer e imprimir la lista 
void Imprime_TS()
{
    printf("\nTabla de Simbolos.\n");
    printf("------------------------------------------------------\n");
    printf(" No. | Lexema               | Tipo\n");
    printf("------------------------------------------------------\n");
    TS *aux;

    if (ini == NULL)
    {
        printf("\nTabla Vacia\n");
    }
    else
    {
        aux = ini;
        while (aux != NULL)
        {
            printf(" %-3d | %-20s | %-20s\n", aux->num_Tok, aux->Lexema, aux->TipTok);
            aux = aux->sig;
        }
        printf("------------------------------------------------------\n");
    }
}

// Lista de palabras clave en C
const char *palabrasReservadas[] =
    {"auto", "break", "case", "char", "const", "continue", "default", "do", "double", "else", "enum", "extern",
     "float", "for", "goto", "if", "inline", "int", "long", "register", "restrict", "return", "short", "signed",
     "sizeof", "static", "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while", "_Bool",
     "_Complex", "_Imaginary", "_Atomic", "_Generic", "_Noreturn", "_Static_assert", "_Thread_local"};

#define NUM_PALABRAS_RESERVADAS (sizeof(palabrasReservadas) / sizeof(palabrasReservadas[0]))

// Función para verificar si una cadena es una palabra clave 
int esPalabraReservada(const char *cadena)
{
    char cadena_minus[100];

    size_t len = strlen(cadena);
    for (size_t i = 0; i < len; i++)
    {
        cadena_minus[i] = tolower(cadena[i]);
    }
    cadena_minus[len] = '\0';

    for (size_t i = 0; i < NUM_PALABRAS_RESERVADAS; i++)
    {
        if (strcasecmp(cadena_minus, palabrasReservadas[i]) == 0)
        {
            return 1; // Es una palabra reservada
        }
    }
    return 0; // No es una palabra reservada
}

void clasificar_cadena(const char *Cadena)
{
    int Posicion = 0;
    const char *Pal = Cadena;
    int TamanoCadena = strlen(Cadena);
    Estado estado = q0;

    while (TamanoCadena > 0)
    {
        const char *c = &Pal[Posicion];

        switch (estado)
        {
        case q0:
            if (*c == '+' || *c == '-')
                estado = q1;
            else if (isdigit(*c))
                estado = q2;
            else if (*c == '*' || *c == '/' || *c == '%')
                estado = q12;
            else if (*c == '>' || *c == '<')
                estado = q9;
            else if (*c == '=')
                estado = q11;
            else if (isalpha(*c))
                estado = q8;
            else if (*c == '&')
                estado = q13;
            else if (*c == '|')
                estado = q15;
            else if (*c == '!')
                estado = q14;
            else
                estado = ERROR;
            break;

        case q1:
            if (isdigit(*c))
                estado = q2;
            else
                estado = ERROR;
            break;

        case q2:
            if (isdigit(*c))
                estado = q2;
            else if (*c == '.')
                estado = q3;
            else
                estado = ERROR;
            break;

        case q3:
            if (isdigit(*c))
                estado = q4;
            else
                estado = ERROR;

            break;

        case q4:
            if (isdigit(*c))
                estado = q4;
            else if (*c == 'E' || *c == 'e')
                estado = q5;
            else
                estado = ERROR;
            break;

        case q5:
            if (*c == '+' || *c == '-')
                estado = q6;
            else
                estado = ERROR;
            break;

        case q6:
            if (isdigit(*c))
                estado = q7;
            else
                estado = ERROR;
            break;

        case q7:
            if (isdigit(*c))
                estado = q7;
            else
                estado = ERROR;
            break;

        case q8:
            if (isdigit(*c) || isalpha(*c)) // L o D (letra o número)
                estado = q8;
            else
                estado = ERROR;
            break;

        case q9:
            if (*c == '=')
                estado = q10;
            else
                estado = ERROR;
            break;

        case q10:
            estado = ERROR;
            break;

        case q11:
            if (*c == '=')
                estado = q10;
            else
                estado = ERROR;
            break;

        case q12:
            if (*c == '+' || *c == '-')
                estado = q13;
            else if (isdigit(*c))
                estado = q14;
            else
                estado = ERROR;
            break;

        case q13:
            if (*c == '&')
                estado = q14;
            else
                estado = ERROR;
            break;

        case q14:
        	if (*c == '=')
                estado = q10;
            else
       	     	estado = ERROR;
      	  	break;

        case q15:
            if (*c == '|')
                estado = q14;
			else
                estado = ERROR;
            break;

        default:
            estado = ERROR;
            break;
        }
        Posicion++;
        TamanoCadena--;
    }

    // Validaciones de estados aceptados
    if (estado == q8)
    {
        if (esPalabraReservada(Cadena))
        {
            Agrega_TS((char *)Cadena, "PR", contador++);
        }
        else
        {
            Agrega_TS((char *)Cadena, "ID", contador++);
        }
    }
    else if (estado == q2) 							// Numero Entero
        Agrega_TS((char *)Cadena, "NE", contador++);
    else if (estado == q4) 							// Numero Decimal
        Agrega_TS((char *)Cadena, "ND", contador++);
    else if (estado == q7) 							// Numero Exponencial
        Agrega_TS((char *)Cadena, "NX", contador++);
    else if (estado == q12 || estado == q1) 		// Operador aritmético
        Agrega_TS((char *)Cadena, "OA", contador++);
    else if (estado == q10 || estado == q9) 						// Operador Relacional
        Agrega_TS((char *)Cadena, "OR", contador++);
    else if (estado == q14) 						// Operador Lógico
        Agrega_TS((char *)Cadena, "OL", contador++);
    else 											// ERROR
        Agrega_TS((char *)Cadena, "ERROR", contador++);
}

int main()
{
    char nombreArchivo[100];
    printf("Ingrese el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    FILE *archivo = fopen(nombreArchivo, "r");
    if (!archivo)
    {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

    char linea[256];
    while (fgets(linea, sizeof(linea), archivo))
    {
        char *token = strtok(linea, " \t\n");
        while (token != NULL)
        {
            clasificar_cadena(token);
            token = strtok(NULL, " \t\n");
        }
    }

    fclose(archivo);
    Imprime_TS(); // Imprime la tabla de símbolos
    return 0;
}