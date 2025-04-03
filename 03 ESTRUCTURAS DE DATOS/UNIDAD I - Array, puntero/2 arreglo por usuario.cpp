#include <iostream>
#include <limits>

using namespace std;

void arregloPorUsuario(int[], int);

int main()
{
    int b;
    cout << "Ingrese la dimension del arreglo: \n";
    while (!(cin >> b) || (b == 0))
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nIngrese correctamente la dimension del arrreglo: \n";
    }

    int array[b];
    arregloPorUsuario(array, b);
    return 0;
}

void arregloPorUsuario(int arr[], int tamano)
{
    int a;
    cout << "\nIngrese los elementos para el arreglo: \n";

    for (int i = 0; i < tamano; i++)
    {
        while (!(cin >> a))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nIngrese correctamente los elementos para el arreglo: \n";
        }
        arr[i] = a;
    }

    cout << "\nLos elementos son: \n";
    for (int i = 0; i < tamano; i++)
    {
        cout << arr[i] << " ";
    }
}
