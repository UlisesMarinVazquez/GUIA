#include <iostream>
#include <string.h>

using namespace std;

class Alumno
{
    private:
        char nombre[20], carrera[20];
        float calificacion;

    public:
        void DatosAlumno()
        {
            cout << "Ingresa el nombre: ";
            cin >> nombre;
            cout << "Ingresa la calificacion: ";
            cin >> calificacion;
            cout << "Ingresa la carrera: ";
            cin >> carrera;
        } 
        void Imprimir()
        {
            cout << "Los datos del alumno son: " << nombre << "|" << calificacion << "|" << carrera << endl;
        }
};

int main()
{
    Alumno obj;
    obj.DatosAlumno();
    obj.Imprimir();
    return 0;
}

