
#include <iostream>
#include <stdlib.h>
#include <stdbool.h>

using namespace std;

class Fecha
{
   
   
    private:
     int d,m,a;
   //bool VERIFICAR();
    void ASIGNAR();


    public:
    void IMPRIMIR();
    bool VERIFICAR();
   
};

void Fecha::ASIGNAR()
    {
      cout<<"INGRESE UNA FECHA (d m a)"<<endl;
      cin>>d>>m>>a;

    }

void Fecha::IMPRIMIR()
    {
          if(VERIFICAR ()) 
          {
           cout<<"FECHA INCORRECTA"<<endl;

          }else
          {
            cout<<"LA FECHA ES: "<<d<<"/"<<m<<"/"<<a<<endl;

          }
    }
   
   bool Fecha::VERIFICAR()
    {
         ASIGNAR();
        
         bool d_invalido=d<1 || d>31;
         bool m_invalido=m<1 || m>12;
     
         if(d_invalido || m_invalido)
         {
            return true;
         }else 
         {
            return false;
         }
    
    
    
    }
   
int main()
{
   
Fecha obj;
obj.IMPRIMIR( );

}