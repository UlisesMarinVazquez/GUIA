/* Crear un programa mediante el estilo de POO usando:
- Clases
- Constructores
- Booleanos para las validaciones de día y mes
Que compare dos fechas tomando en cuenta los años bisiestos. */


#include <iostream>

using namespace std;

class Fecha 
{

    private:
    int DIA, MES, ANO;
    bool D_valido, M_valido, A_valido;

    public:
    Fecha(int d, int m, int a) 
    {
        DIA = d;
        MES = m;
        ANO = a;
        validarFecha();
    }


    bool Bisiesto(int ANO) 
    {
        return ((ANO % 4 == 0 && ANO % 100 != 0) || ANO % 400 == 0);
    }


    void validarFecha() 
    {
        D_valido = (DIA >= 1 && DIA <= 31);
        M_valido = (MES >= 1 && MES <= 12);
        A_valido = true;

        if (MES == 4 || MES == 6 || MES == 9 || MES == 11) 
        {
            D_valido = (DIA >= 1 && DIA <= 30);
        }
        else if (MES == 2) 
        {
            if (Bisiesto(ANO))
            {
                D_valido = (DIA >= 1 && DIA <= 29);
            }
            else 
            {
                D_valido = (DIA >= 1 && DIA <= 28);
            }
        }
        else 
        {
            D_valido = (DIA >= 1 && DIA <= 31);
        }
    }

    bool fechaValida() 
    {
        return (D_valido && M_valido && A_valido);
    }


    int diasDiferencia(Fecha otraFecha) 
    {
        int dias = 0;
        int diasbi=0;
        int diastotal;
        int mesDias[] = {31,28,31,30,31,30,31,31,30,31,30,31};

        while(DIA != otraFecha.DIA || MES != otraFecha.MES || ANO != otraFecha.ANO) 
        {
            dias++;
            DIA++;
            if(DIA > mesDias[MES-1]) 
            {
                DIA = 1;
                MES++;
            }
            if(MES > 12) 
            {
                MES = 1;
                ANO++;
                if(Bisiesto(ANO))
                {
                    diasbi++;
                }
            }
         }   
          diastotal=dias+diasbi;
          return diastotal;
    }
};

int main() 
{
    int d1, m1, a1, d2, m2, a2;
    cout << "INGRESE LA PRIMERA FECHA (DIA, MES, ANO): "<<endl;
    cin >> d1 >> m1 >> a1;

    Fecha fecha1(d1, m1, a1);
    fecha1.validarFecha();
    if (!fecha1.fechaValida())
    {
        cout<<"FECHA 1 INVALIDAD\n";
    }
    
    cout << "INGRESE LA SEGUNDA FECHA (DIA, MES, ANO): "<<endl;
    cin >> d2 >> m2 >> a2;
    
    Fecha fecha2(d2, m2, a2);
    fecha2.validarFecha();
    if (!fecha2.fechaValida())
    {
        cout<<"FECHA 2 INVALIDA\n";
    }
    
    int DIAS = fecha1.diasDiferencia(fecha2);
    cout << "\nDIAS DE DIFERENCIA ENTRE FECHAS:  " << DIAS << endl;
    
}
