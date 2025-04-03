#include <iostream>

using namespace std;

class Fecha 
{

    private:
    int DIA, MES, ANIO;

    public:
    Fecha(int d, int m, int a) 
    {
        DIA = d;
        MES = m;
        ANIO = a; 
    }
    void validarFecha();
    

    void validarFecha() 
    {
        if (MES < 1 || MES > 12) 
        {
            cout << "Fecha invalida" << endl;
        }
        else if (DIA < 1 || DIA > 31) 
        {
            cout << "Fecha invalida" << endl;
        }
        else if ((MES == 4 || MES == 6 || MES == 9 || MES == 11) && DIA > 30) 
        {
            cout << "Fecha invalida" << endl;
        }
        else if (MES == 2) 
        {
            if ((ANIO % 4 == 0 && ANIO % 100 != 0) || ANIO % 400 == 0) 
            {
                if (DIA > 29)
                {
                    cout << "Fecha invalida\n" << endl;
                }
            }
            else if (DIA > 28) 
            {
                cout << "Fecha invalida \n" << endl;
            }
        }
        else 
        {
            cout << "Fecha valida" << endl;
        }
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
                if((ANIO % 4 == 0 && ANIO % 100 != 0) || ANIO % 400 == 0)
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
    fecha1.validarFecha();
    cout << "INGRESE LA SEGUNDA FECHA (DIA, MES, ANIO): "<<endl;
    cin >> d2 >> m2 >> a2;
    Fecha fecha2(d2, m2, a2);
    fecha2.validarFecha();

    int DIAS = fecha1.diasDiferencia(fecha2);
    cout << "DIAS DE DIFERENCIA ENTRE FECHAS:  " << DIAS << endl;
    
}
