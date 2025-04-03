#include <iostream>
#include <conio.h>

using namespace std;

struct Complejo
{
    int real;
    int imaginario;
};

struct Complejo sumaComplejos(struct Complejo c1, struct Complejo c2)
{
    struct Complejo resultado;
    resultado.real= c1.real + c2.real;
     resultado.imaginario= c1.imaginario + c2.imaginario;
    return resultado;
}

int main()
{

    struct Complejo c1, c2, resultado;
    cout<<"INGRESE EL PRIMER NUMERO COMPLEJO (parte real e imaginaria separada por un espacio): ";
    cin >> c1.real >> c1.imaginario;
    cout << "INGRESE EL SEGUNDO NUMERO COMPLEJO (parte real e imaginaria separada por un espacio): ";
    cin >> c2.real >> c2.imaginario;
    resultado = sumaComplejos(c1, c2);
    cout << "LA SUMA ES: " << resultado.real << " + " << resultado.imaginario << "i" << endl;
    getch();

}
