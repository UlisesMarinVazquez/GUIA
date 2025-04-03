
#include <iostream>

using namespace std;

class Alumnos
{
   
    float calif[10];
    int Nbol[10];
    
    public:
    void ASIGNAR();
    void IMPRIMIR();
    



};

void Alumnos::ASIGNAR()

for ( i = 0; i < 10; i++)
{
    cout<<"INGRESE EL NUMERO DE CUENTA: ";
    cin>>Nbol[i];
    cout"INGRESE LA CALIFICACION: ";
    cin>>calif[i];
}

void Alumnos::IMPRIMIR()

for ( i = 0; i < 10; i++)
{
    cout<<"EL NUMERO DE CUENTA ES: "<<Nbol[i]<<endl;
     cout<<"LA CALIFICACION ES: "<<calif[i]<<endl;
    
}

main()
{
Alumnos obj[10];
obj.ASIGNAR();
obj.IMPRIMIR();

return 0;

}