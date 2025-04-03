#include <iostream>

using namespace std;

class Fecha 
{

    private:
    bool DIA_valido, MES_valido, ANIO_valido;
    int DIA, MES, ANIO;

    public:
    Fecha(int d, int m, int a) 
    {
        DIA = d;
        MES = m;
        ANIO = a; 
        validarFecha();
    }

    bool esBisiesto(int anio) 
    {
        return ((anio % 4 == 0 && anio % 100 != 0) || anio % 400 == 0);
    }

    void validarFecha() 
    {
        DIA_valido = (DIA >= 1 && DIA <= 31);
        MES_valido = (MES >= 1 && MES <= 12);
        ANIO_valido = true;
        if (MES == 4 || MES == 6 || MES == 9 || MES == 11) 
        {
            DIA_valido = (DIA >= 1 && DIA <= 30);
        }
        else if (MES == 2) 
        {
            if (esBisiesto(ANIO))
            {
                DIA_valido = (DIA >= 1 && DIA <= 29);
            }
            else 
            {
                DIA_valido = (DIA >= 1 && DIA <= 28);
            }
        }
        else 
        {
            DIA_valido = (DIA >= 1 && DIA <= 31);
        }
    }

    bool fechaValida() 
    {
        return (DIA_valido && MES_valido && ANIO_valido);
    }

    int diasDiferencia(Fecha otraFecha) 
    {
        int dias = 0;
        int diasbi=0;
        int diastotal;
        int mesDias[] = {31,28,31,30,31,30,31,31,30,31,30,31};
        while(DIA != otraFecha.DIA || MES != otraFecha.MES || ANIO != otraFecha.ANIO) 
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
                ANIO++;
                if(esBisiesto(ANIO))
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
    cout << "INGRESE LA PRIMERA FECHA (DIA, MES, ANIO): "<<endl;
    cin >> d1 >> m1 >> a1;

    Fecha fecha1(d1, m1, a1);
    if (!fecha1.fechaValida()) 
    {
        cout << "Fecha 1 invalida\n";
        return 0;
    }
    
    cout << "INGRESE LA SEGUNDA FECHA (DIA, MES, ANIO): "<<endl;
    cin >> d2 >> m2 >> a2;
    Fecha fecha2(d2, m2, a2);
    {
        cout << "Fecha 2 invalida\n";
        return 0;
    }

    int DIAS = fecha1.diasDiferencia(fecha2);
      cout << "DIAS DE DIFERENCIA ENTRE FECHAS:  " << DIAS <<endl;
}