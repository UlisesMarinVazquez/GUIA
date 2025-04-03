#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

class Fecha
{
    private:
    int d,m,a;
    void asignarFecha();

    public:
    bool verificar(int minDia, int maxDia, int minMes, int maxMes);
    void Imprimir();
};
void Fecha::asignarFecha()
    {
       cout << "Ingresa una fecha(d/m/a)"<<endl;
            cin >> d>>m>>a;
    }
bool Fecha::verificar(int minDia, int maxDia, int minMes, int maxMes)
{
    if (m >= minMes && m <= maxMes && d >= minDia && d <= maxDia)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Fecha::Imprimir ()
    {
     asignarFecha();
        cout<<"La fecha es: "<<d<<"/"<<m<<"/"<<a<<endl;
    }

main()
{
	Fecha obj;
	obj.Imprimir ();
	bool estaDentroDelRango = obj.verificar(1, 31, 1, 12);
    if (estaDentroDelRango)
    {
        cout << "La fecha esta dentro del rango" << endl;
    }
    else
    {
        cout << "La fecha NO esta dentro del rango" << endl;
    }

    return 0;
}