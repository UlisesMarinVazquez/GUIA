
#include <iostream>

using namespace std;

class Fecha
{
    private:
    int d,m,a;

    public:
    void asignarFecha(int D,int M,int A);
    void Imprimir();
};
bool Fecha::asignarFecha()
    {
   /*      d=D;
        m=M;
        a=A;
         */
        if (d < 1 || m> 12) return false;
        if (d< 1 || d> 31) return false;
    }return true;
    
void Fecha::Imprimir ()
    {
        cout<<"La fecha es: "<<d<<"/"<<m<<"/"<<a<<endl;
    }


main()
{
	Fecha obj;
	obj.asignarFecha(15,11,2022);
	obj.Imprimir ();
}
