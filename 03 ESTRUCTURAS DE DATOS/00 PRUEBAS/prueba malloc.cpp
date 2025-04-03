#include <iostream>
#include <cstdlib>

using namespace std;

class Pila
{
private:
    int capacidad_maxima;
    int puntero_superior;
    int *arreglo;

public:
    Pila(int capacidad);
    ~Pila();
    bool estaVacia();
    bool estaLlena();
    void push(int elemento);
    int pop();
    int peek();
    int tamano();
};

Pila::Pila(int capacidad)
{
    if (capacidad <= 0)
    {
        cout << "La capacidad debe ser mayor que 0." << endl;
        exit(1);
    }
    capacidad_maxima = capacidad;
    arreglo = (int *)malloc(capacidad_maxima * sizeof(int));
    puntero_superior = -1; // Pila vacía al inicio
}

Pila::~Pila()
{
    free(arreglo);
}

bool Pila::estaVacia()
{
    return puntero_superior == -1;
}

bool Pila::estaLlena()
{
    return puntero_superior == capacidad_maxima - 1;
}

void Pila::push(int elemento)
{
    if (!estaLlena())
    {
        puntero_superior++;
        arreglo[puntero_superior] = elemento;
    }
    else
    {
        cout << "La pila está llena. No se puede realizar push." << endl;
    }
}

int Pila::pop()
{
    if (!estaVacia())
    {
        int elemento = arreglo[puntero_superior];
        puntero_superior--;
        return elemento;
    }
    else
    {
        cout << "La pila está vacía. No se puede realizar pop." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }
}

int Pila::peek()
{
    if (!estaVacia())
    {
        return arreglo[puntero_superior];
    }
    else
    {
        cout << "La pila está vacía. No hay elementos para ver." << endl;
        return -1; // Valor predeterminado en caso de pila vacía
    }
}

int Pila::tamano()
{
    return puntero_superior + 1;
}

int main()
{
    int capacidad = 10; // Capacidad de la pila
    Pila miPila(capacidad);

    // Ejemplo de uso de la pila
    for (int i = 1; i <= 5; i++)
    {
        miPila.push(i * 10);
    }

    cout << "Tamano de la pila: " << miPila.tamano() << endl;
    cout << "Elemento en la parte superior de la pila: " << miPila.peek() << endl;

    cout << "Despilando elementos:" << endl;
    while (!miPila.estaVacia())
    {
        cout << miPila.pop() << " ";
    }
    cout << endl;

    return 0;
}
