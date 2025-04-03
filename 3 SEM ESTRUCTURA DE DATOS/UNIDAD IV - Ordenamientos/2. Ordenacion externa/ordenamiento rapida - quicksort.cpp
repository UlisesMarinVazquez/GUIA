#include <iostream>
#include <vector>

using namespace std;

// Función para intercambiar dos elementos en un vector
void intercambiar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Función que toma el último elemento como pivote, coloca el pivotee en su posición correcta
// en el vector ordenado y coloca todos los elementos menores a la izquierda y los mayores a la derecha.
int particion(vector<int> &arreglo, int parteBaja, int parteAlta)
{
    int pivote = arreglo[parteAlta]; // Seleccionamos el último elemento como pivote
    int i = parteBaja - 1;           // Índice del menor elemento

    for (int j = parteBaja; j < parteAlta; j++)
    {
        // Si el elemento actual es menor o igual al pivote
        if (arreglo[j] <= pivote)
        {
            i++;
            intercambiar(arreglo[i], arreglo[j]);
        }
    }

    intercambiar(arreglo[i + 1], arreglo[parteAlta]); // Colocamos el pivotee en su posición correcta
    return i + 1;                                     // Devolvemos el índice del pivotee
}

// Función principal de ordenación rápida
void quicksort(vector<int> &arreglo, int parteBaja, int parteAlta)
{
    if (parteBaja < parteAlta)
    {
        // Encontramos la posición del pivotee tal que los elementos a la izquierda son menores y los de la derecha son mayores
        int pivoteInicio = particion(arreglo, parteBaja, parteAlta);

        // Llamadas recursivas para ordenar los subarregloeglos
        quicksort(arreglo, parteBaja, pivoteInicio - 1);
        quicksort(arreglo, pivoteInicio + 1, parteAlta);
    }
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> arreglo(n);

    cout << "Ingrese los elementos uno por uno:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> arreglo[i];
    }

    // Llamamos a la función de ordenación rápida
    quicksort(arreglo, 0, n - 1);

    // Mostramos el vector ordenado
    cout << "Vector ordenado:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arreglo[i] << " ";
    }

    return 0;
}
