#include <iostream>
#include <random>
#include <string>
#include <cstdbool>
#include <cstdlib>
#include <ctime>

using namespace std;

struct FECHA
{
    int d, m, a;
}fechas[3];

struct EMPLEADO
{
    char n[50];
    int noemp;
    int h;
    bool t;
    float sueldo[3];

}empleados[3];


int main()

{
int i, j;

for ( i = 0; i < 3; i++)
{
    fflush(stdin);
    cout<<"INGRESE SU NOMBRE:  ";
    cin.getline(empleados[i].n,50,'\n');
    cout<<"INGRESE SU NUMERO DE EMPLEADO: ";
    cin>>empleados[i].noemp;
    cout<<"\n";

}


for ( i = 0; i < 3; i++)
{
    empleados[i].h=rand() % 35 + 20;
    empleados[i].t = rand() % 2;
    fechas[i].a=rand() % 10 + 2000;
    fechas[i].d=rand() % 12 + 1;
    fechas[i].m=rand() % 28 + 1;

    for ( j = 0; j<3; i++)
    {
        empleados[i].sueldo[j]=rand() % 10001 + 10000;
    }
    
}


for ( i = 0; i < 3; i++)
{
    cout<<"LOS DATOS DE LOS EMPLEADOS." <<endl;
    cout<<"NOMBRE: "<<empleados[i].n<<endl;
    cout<<"NO. DE EMPLEADO: "<<empleados[i].noemp<<endl;
    cout<<"SUELDO: "<<empleados[i].sueldo<<endl;
    cout<<"TURNO: "<<empleados[i].t<<endl;
    cout<<"HORAS TRABAJADAS: "<<empleados[i].h<<endl;
    cout<<"FECHA DE INICIO: "<< fechas[i].d << "/" << fechas[i].m << "/" << fechas[i].a <<endl;


}

return 0;
}
