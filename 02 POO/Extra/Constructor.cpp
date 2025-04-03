/* Un programa de clase Punto con E/S con funcion miembro fuera de clase */

#include <iostream>

using namespace std;

class Punto
{
   /*   private: */
    int X, Y;

    public:
    void ASIGNAR();
    void IMPRIMIR();
    Punto();
    Punto(int a, int b);
    Punto(int c);

};

Punto::Punto()
{
    X=0;
    Y=0;
}

Punto::Punto(int a, int b)
{
    X=a, Y=b;
} 

Punto::Punto(int c)
{
    X=0, Y=c;
}

/* void Punto::ASIGNAR()
{
cout<<"INGRESA EL PUNTO A y B: ";
cin>>X>>Y;
} */


void Punto::IMPRIMIR()
	{
	cout<<"EL PUNTO ES: "<<X<<","<<Y<<endl;
    }


int main()
{
	Punto p1,p2(5,3),p3(8);
    Punto obj;
    p1.IMPRIMIR();
    p2.IMPRIMIR();
    p3.IMPRIMIR();
}	

