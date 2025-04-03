#include <iostream>
#include <cstring>

using namespace std;

class Alumno
{
    private:
    char NOMBRE[100], CARRERA[100];
    float PROMEDIO;

    public:
    void GUARDAR(char nombre[], float promedio, char carrera[]);
    void IMPRIMIR();

};

void Alumno::GUARDAR(char nombre[], float promedio, char carrera[])
{
    NOMBRE[100]=nombre[100], PROMEDIO=promedio, CARRERA[100]=carrera[100];
}

void Alumno::IMPRIMIR()
{
    cout<<"EL NOMBRE ES: "<<nombre[]<<"\n"<<"PROMEDIO: "<<promedio<<"\n"<<"CARRERA: "<<carrera[]<<endl;

}

main()
{
    Alumno obj;
    obj.GUARDAR("ULISES", 5, "COMPUTACION");
    obj.IMPRIMIR();

}


