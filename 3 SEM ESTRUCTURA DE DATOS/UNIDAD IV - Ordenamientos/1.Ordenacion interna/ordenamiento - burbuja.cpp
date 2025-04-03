
// Metodo burbuja. Funciona revisando cada elemento de la lista que va a ser ordenada intercambiando la posicion de los elementos que van a ser reordenados si se hallan equivocados.

#include <iostream> //varios objetos de flujo estandar

using namespace std;

int main()
{
    int numeros[] = {4, 1, 2, 3, 5};
    int aux;

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (numeros[j] > numeros[j + 1])
            {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }

    cout << "Orden ascendente: ";

    for (int i = 0; i < 5; i++)
    {
        cout << numeros[i] << " ";
    }

    return 0;
}
