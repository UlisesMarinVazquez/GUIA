#include <iostream>

using namespace std;

class Fecha
{
    /*  private: */
    int DIA, MES, ANO;

    public:
    void ASIGNAR();
    void IMPRIMIR();
    Fecha();
    Fecha(int a, int b, int c);
    Fecha(int d, int e);

};

Fecha::Fecha()
{
   DIA=0, MES=0, ANO=0;
}

Fecha::Fecha(int a, int b, int c)
{
    DIA=a, MES=b, ANO=c;
} 

Fecha::Fecha(int e, int d)
{
   /*  cout<<"INGRESA DIA Y MES: "<<DIA<<MES; */
    DIA=e, MES=d, ANO=2023;

}

/* void Fecha::ASIGNAR()
{
cout<<"INGRESA EL Fecha - DIA y MES: ";
cin>>DIA>>MES;

} */


void Fecha::IMPRIMIR()
	{
	cout<<"EL Fecha es: "<<DIA<<" / "<<MES<<" / "<<ANO<<endl;
    }


int main()
{
     Fecha f1,f2(12,04,2023),f3(15,02);
     Fecha obj;
     f1.IMPRIMIR();
     f2.IMPRIMIR();
     f3.IMPRIMIR();

}	
