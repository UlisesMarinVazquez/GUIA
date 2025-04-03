#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *p;
};

void agregarPila(Nodo *&, int);
int popPila(Nodo *&);
void peekPila(Nodo *);
void emptyPila(Nodo *&);
int topPila(Nodo *);

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
    peekPila(pila);

    // Mostrar y eliminar la cima de la pila
    int cima = topPila(pila);
    if (cima != -1)
    {
        cout << "Cima de la pila: " << cima << endl;
        popPila(pila);
    }

    // Mostrar los elementos después de eliminar la cima
    cout << "Elementos en la pila después de eliminar la cima:" << endl;
    peekPila(pila);

    // Vaciar la pila
    emptyPila(pila);
    cout << "Elementos en la pila después de vaciarla:" << endl;
    peekPila(pila);

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

int popPila(Nodo *&pila)
{
    if (pila == NULL)
    {
        cout << "La pila está vacía. No se puede realizar pop." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }

    Nodo *temp = pila;
    int elemento = temp->dato;
    pila = pila->p;
    free(temp); // Liberar el nodo eliminado
    return elemento;
}

void peekPila(Nodo *pila)
{
    if (pila == NULL)
    {
        cout << "La pila está vacía." << endl;
        return;
    }

    cout << "Pila:" << endl;
    cout << "Indice\tValor" << endl;

    Nodo *temp = pila;
    int indice = 0;

    while (temp != NULL)
    {
        cout << indice << "\t" << temp->dato << endl;
        temp = temp->p;
        indice++;
    }
}

void emptyPila(Nodo *&pila)
{
    while (pila != NULL)
    {
        Nodo *temp = pila;
        pila = pila->p;
        free(temp); // Liberar el nodo eliminado
    }

    cout << "La pila ha sido vaciada." << endl;
}

int topPila(Nodo *pila)
{
    if (pila == NULL)
    {
        cout << "La pila está vacía. No hay elementos en la cima." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }

    return pila->dato;
}
