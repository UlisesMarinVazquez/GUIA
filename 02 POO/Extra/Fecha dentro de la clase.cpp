
#include <iostream>

using namespace std;

class Fecha
{
    private:
    int d,m,a;

    public:
    void asignarFecha(int D,int M,int A)
    {
        d=D;
        m=M;
        a=A;
    }

    void Imprimir ()
    {
        cout<<"La fecha es: "<<d<<"/"<<m<<"/"<<a<<endl;
    }
};

main()
{
	Fecha obj;
	obj.asignarFecha(15,11,2022);
	obj.Imprimir ();
}
