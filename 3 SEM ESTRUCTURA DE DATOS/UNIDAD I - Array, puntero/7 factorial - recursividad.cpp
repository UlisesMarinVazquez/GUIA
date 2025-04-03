#include <iostream>

using namespace std;

int FACTORIAL(int n);

int main()
{
    char resp;

    do
    {
        int n;
        cout << "Ingresa un numero positivo: ";
        cin >> n;
        cout << "El resultado de " << n << " factorial es: " << FACTORIAL(n) << std::endl;
        cout << "\nQuieres calcular otro factorial? (s/n): ";
        cin >> resp;

    } while (resp == 's' || resp == 'S');
    cout << "Fin del programa.";

    return 0;
}

int FACTORIAL(int n)
{
    if (n > 1)
    {
        return n * FACTORIAL(n - 1);
    }
    else
    {
        return 1;
    }
}
