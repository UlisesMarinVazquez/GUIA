#include <iostream>
#include <vector>

using namespace std;

// Función para combinar dos subarreglos ordenados
void UNIR(vector<int> &arr, int izquierda, int media, int derecha)
{
    int n1 = media - izquierda + 1; // Tamaño del primer subarreglo
    int n2 = derecha - media;       // Tamaño del segundo subarreglo

    // Creamos subarreglos temporales
    vector<int> arregloIzquierdo(n1);
    vector<int> arregloDerecho(n2);

    // Copiamos datos a los subarreglos temporales arregloIzquierdo[] y arregloDerecho[]
    for (int i = 0; i < n1; i++)
        arregloIzquierdo[i] = arr[izquierda + i];
    for (int j = 0; j < n2; j++)
        arregloDerecho[j] = arr[media + 1 + j];

    // Combinamos los subarreglos temporales en arr[izquierda..derecha]

    // Índices iniciales de los subarreglos izquierdo, derecho y combinado
    int i = 0;
    int j = 0;
    int k = izquierda;

    while (i < n1 && j < n2)
    {
        if (arregloIzquierdo[i] <= arregloDerecho[j])
        {
            arr[k] = arregloIzquierdo[i];
            i++;
        }
        else
        {
            arr[k] = arregloDerecho[j];
            j++;
        }
        k++;
    }

    // Copiamos los elementos restantes de arregloIzquierdo[], si los hay
    while (i < n1)
    {
        arr[k] = arregloIzquierdo[i];
        i++;
        k++;
    }

    // Copiamos los elementos restantes de arregloDerecho[], si los hay
    while (j < n2)
    {
        arr[k] = arregloDerecho[j];
        j++;
        k++;
    }
}

// Función principal que ordena arr[izquierda..derecha] usando el ordenamiento por mezcla
void mergeSort(vector<int> &arr, int izquierda, int derecha)
{
    if (izquierda < derecha)
    {
        // Encuentra el punto medio del arreglo
        int media = izquierda + (derecha - izquierda) / 2;

        // Ordena la primera mitad y la segunda mitad
        mergeSort(arr, izquierda, media);
        mergeSort(arr, media + 1, derecha);

        // Combina las mitades ordenadas
        UNIR(arr, izquierda, media, derecha);
    }
}

int main()
{
    int n;
    cout << "Ingrese la cantidad de elementos: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Ingrese los elementos uno por uno:\n";
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    // Llamamos a la función de ordenación por mezcla
    mergeSort(arr, 0, n - 1);

    // Mostramos el vector ordenado
    cout << "Vector ordenado:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
