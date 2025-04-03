#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

void ajustarArbol(int arr[], int n, int i)
{
    int padre = i;
    int hijoIzquierda = 2 * i + 1;
    int hijoDerecha = 2 * i + 2;

    if (hijoIzquierda < n && arr[hijoIzquierda] > arr[padre])
        padre = hijoIzquierda;

    if (hijoDerecha < n && arr[hijoDerecha] > arr[padre])
        padre = hijoDerecha;

    if (padre != i)
    {
        swap(arr[i], arr[padre]);
        ajustarArbol(arr, n, padre);
    }
}

void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        ajustarArbol(arr, n, i);

    for (int i = n - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        ajustarArbol(arr, i, 0);
    }
}

int main()
{
    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Arreglo de entrada: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    heapSort(arr, n);
    cout << "Arreglo de salida: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
