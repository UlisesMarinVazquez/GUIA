#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Ingresa la cantidad de elementos que deseas en el arreglo: ";
    cin >> n;

    int *puntero = new int[n];
    cout << "Ingresa " << n << " elementos:" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> *(puntero + i);
    }

    cout << "Elementos ingresados:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Elemento " << i + 1 << ": " << *(puntero + i) << endl;
    }

    delete[] puntero;

    return 0;
}
