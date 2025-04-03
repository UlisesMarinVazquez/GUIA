/* Realizar un programa que tenga entradas y salidas de datos de los empleados */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
srand(time(NULL));
int num_empleado, sueldo, horas_trabajadas;
string nombre, turno;

cout<<"INGRESE EL NUMERO DE EMPLEADO: \n"
cin>>num_empleado;

cout<<"INGRESE EL NOMBRE DEl EMPLEADO: \n"
cin>>nombre;

sueldo=rand()% 10001+10000;
cout<<"EL SUELDO DEL EMPLEADO "<<nombre<< "es:$ "<<sueldo<<endl;
cout<<"INGRESE EL TURNO DEL EMPLEADO (manana, tarde, noche)";
cout<<"INGRESE LAS HORAS TRABAJADAS POR EL EMPLEADO: ";
cin>>horas_trabajadas;


int sueldo_total;
if (turno="manana")
{
    sueldo_total=sueldot(horas_trabajadas*100);
}
else if (turno="tarde")
{
   sueldo_total=sueldot(horas_trabajadas*120);
}
else if (turno="noche")
{
    sueldo_total=sueldot(horas_trabajadas*150);
}

    cout<<"EL EMPLEADO "<<nombre<< "laboro"<<horas_trabajadas<<"horas en el turno"<<turno<<endl;
    cout<<"EL SUELDO TOTAL DEL EMPLEADO "<<nombre<<"es: $ "<<sueldo_total<<endl;
    return 0;
}