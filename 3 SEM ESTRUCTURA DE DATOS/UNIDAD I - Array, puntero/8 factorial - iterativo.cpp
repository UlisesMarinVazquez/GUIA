#include <iostream>
using namespace std;

int calcularFactorial(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n;

    cout << "Ingresa un número para calcular su factorial: ";
    cin >> n;

    if (n < 0)
    {
        cout << "El factorial de un número negativo no está definido.";
    }
    else
    {
        int factorial = calcularFactorial(n);
        cout << "El factorial de " << n << " es " << factorial;
    }

    return 0;
}
