#include <iostream>
#include <string>

using namespace std;

int main()
{
    string palabra;

    // Solicitar al usuario ingresar una palabra
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    // Mostrar códigos ASCII de cada carácter en la palabra
    cout << "Codigos ASCII de cada caracter en la palabra:\n";
    for (char c : palabra)
    {
        cout << "Caracter: " << c << ", Codigo ASCII: " << static_cast<int>(c) << endl;
    }

    // Realizar operaciones con los códigos ASCII
    int suma = 0;
    int resta = 0;

    for (char c : palabra)
    {
        suma += static_cast<int>(c);
        resta -= static_cast<int>(c);
    }

    cout << "Suma de codigos ASCII: " << suma << endl;
    cout << "Resta de codigos ASCII: " << resta << endl;

    return 0;
}