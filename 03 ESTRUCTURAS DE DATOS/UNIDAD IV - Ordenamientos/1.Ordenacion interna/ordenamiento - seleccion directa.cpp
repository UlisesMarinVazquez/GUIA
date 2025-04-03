
// Algoritmo de ordenamiento por seleccion requiere O(n^2) operaciones para ordenar una lista de n elementos.
// funcionamiento:
// 1. Buscar el mínimo elemento de la lista
// 2. Intercambiar con el primer elemento
// 3. Buscar el mínimo del resto de la lista
// 4. Intercambiar con el segundo
// 5. Y así sucesivamente

/* Consiste en buscar el menor elemento e intercambiarlo por el elemento de la menor posicion posteriormente se busca el elemeno más pequeño y se coloca en la segunda posicion, así sucesivamente hasta terminar el arreglo. */

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numeros[] = {3, 2, 1, 5, 4};
    int aux, minimo;

    // Algoritmo de ordenamiento por seleccion

    for (int i = 0; i < 5; i++)
    {
        minimo = i;
        for (int j = i + 1; j < 5; j++)
            if (numeros[j] < numeros[minimo])
            {
                minimo = j;
            }

        aux = numeros[i];
        numeros[i] = numeros[minimo];
        numeros[minimo] = aux;
    }

    cout << "Orden ascendente: ";

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }
    return 0;
}