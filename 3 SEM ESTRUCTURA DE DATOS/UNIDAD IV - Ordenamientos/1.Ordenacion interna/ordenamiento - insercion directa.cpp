#include <iostream>

using namespace std;

int main()
{

    int numeros[] = {4, 2, 3, 1, 5};
    int aux, posicion;

    // Algoritmo de ordenamiento por insercion

    for (int i = 0; i < 5; i++)
    {
        posicion = i;
        aux = numeros[i];
        while ((posicion > 0) && (numeros[posicion - 1] > aux)) // Si el elemento.izq > elemento.actual, cambio
        {
            numeros[posicion] = numeros[posicion - 1]; // Intercambio de elementos
            posicion--;
        }
        numeros[posicion] = aux; // Actualizar la posicion de los elementos
    }

    cout << "Orden ascendente: ";

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }
}
