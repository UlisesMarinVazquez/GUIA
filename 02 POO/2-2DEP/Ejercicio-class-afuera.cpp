
#include <iostream>
#include <cstring>

using namespace std;

class Alumno
{
private:
	char NOMBRE[20], CARRERA[20];
	float PROMEDIO;

public:
	void DATOS(char n[], float p, char c[]);
	void IMPRIMIR();
};

void Alumno::DATOS(char n[], float p, char c[])
{
	strcpy(NOMBRE, n);
	PROMEDIO = p;
	strcpy(CARRERA, c);
}

void Alumno::IMPRIMIR()
{
	cout << "Los datos del alumno son: " << NOMBRE << " | " << PROMEDIO << " | " << CARRERA << endl;
}

main()
{
	Alumno obj;
	obj.DATOS("ULISES", 5, "COMPUTACION");
	obj.IMPRIMIR();
}