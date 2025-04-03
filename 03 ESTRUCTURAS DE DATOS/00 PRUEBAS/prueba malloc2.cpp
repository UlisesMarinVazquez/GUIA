#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *p;
};

void agregarPila(Nodo *&, int);

int main()
{
    Nodo *pila = NULL;
    int n;

    while (true)
    {
        cout << "Ingresa un numero entero a la pila (o -1 para salir): ";
        cin >> n;

        if (n == -1)
        {
            break; // Salir del bucle si se ingresa -1
        }

        agregarPila(pila, n);
    }

    // Mostrar los elementos de la pila
    cout << "Elementos en la pila:" << endl;
    Nodo *temp = pila;
    while (temp != NULL)
    {
        cout << temp->dato << " ";
        temp = temp->p;
    }

    // Liberar la memoria asignada por malloc
    while (pila != NULL)
    {
        Nodo *temp = pila;
        pila = pila->p;
        delete temp;
    }

    return 0;
}

void agregarPila(Nodo *&pila, int n)
{
    Nodo *nuevoNodo = (Nodo *)malloc(sizeof(Nodo)); // Utilizar malloc para crear el nodo
    nuevoNodo->dato = n;
    nuevoNodo->p = pila;
    pila = nuevoNodo;
    cout << "El dato " << n << " fue agregado correctamente." << endl;
}
