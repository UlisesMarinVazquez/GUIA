/* Obtener la clase, funciones, constructores nulos y alternos mediante sólo el main */


#include <iostream>

using namespace std;

class Entero
{
    private:
    int m,n;
  
    public:
    Entero(int, int);
    Entero(int);
    Entero();
    void mostrar();
    Entero fun();

};

void Entero::mostrar()
{

     cout<< "m= "<<m<<" , n= "<<n<<endl;
        
}

Entero Entero::fun()
{
    return Entero(-m, -n);

    /* Entero aux;
    aux.n=n*-1;
    aux.m=m*-1;
    return aux; */
}

Entero::Entero(int c, int d)
{
    m=c;
    n=d;

}

Entero::Entero()
{
    m=0;
    n=0;

}

Entero::Entero(int d)
{
   m=0;
   n=d;
}


int main()
{
    Entero e1(4,5), p, r(5), h(8);   /* p es invocación implícita */
    Entero obj=Entero(6,7);
    Entero q=Entero();   /* q es invocación explicíta */

    e1.mostrar();
    obj.mostrar();
    p.mostrar();
    q.mostrar();
    r.mostrar();
    r=e1.fun();
    r.mostrar();

}





