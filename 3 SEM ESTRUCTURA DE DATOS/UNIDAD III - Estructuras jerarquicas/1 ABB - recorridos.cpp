#include <iostream>
#include <cstdlib> // Necesario para generación de números aleatorios
#include <ctime>   // Necesario para inicializar la semilla aleatoria

using namespace std;

struct Arbol
{
    int dato;
    Arbol *izquierdo;
    Arbol *derecho;

    Arbol(int val) : dato(val), izquierdo(nullptr), derecho(nullptr) {}
};

Arbol *insertar(Arbol *raiz, int valor)
{
    if (raiz == nullptr)
    {
        return new Arbol(valor);
    }

    if (valor < raiz->dato)
    {
        raiz->izquierdo = insertar(raiz->izquierdo, valor);
    }
    else
    {
        raiz->derecho = insertar(raiz->derecho, valor);
    }

    return raiz;
}

void pre_Orden(Arbol *raiz)
{
    if (raiz != nullptr)
    {
        cout << raiz->dato << " ";
        pre_Orden(raiz->izquierdo);
        pre_Orden(raiz->derecho);
    }
}

void in_Orden(Arbol *raiz)
{
    if (raiz != nullptr)
    {
        in_Orden(raiz->izquierdo);
        cout << raiz->dato << " ";
        in_Orden(raiz->derecho);
    }
}

void post_Orden(Arbol *raiz)
{
    if (raiz != nullptr)
    {
        post_Orden(raiz->izquierdo);
        post_Orden(raiz->derecho);
        cout << raiz->dato << " ";
    }
}

int main()
{
    Arbol *raiz = nullptr;
    int n;
    int opcion;

    cout << "Elige una opcion:\n";
    cout << "1. Ingresar elementos manualmente\n";
    cout << "2. Generar una lista automatica de 5 numeros aleatorios\n";
    cout << "opcion: ";
    cin >> opcion;

    if (opcion == 1)
    {
        cout << "\nIngresa la cantidad de numeros enteros que desea en el arbol: \n";
        cin >> n;
        cout << "Ingresa los numeros enteros uno por uno (separados por un espacio):\n";
        for (int i = 0; i < n; ++i)
        {
            int num;
            cin >> num;
            raiz = insertar(raiz, num);
        }
    }
    else if (opcion == 2)
    {
        // Inicializar la semilla aleatoria
        srand(static_cast<unsigned>(time(0)));

        cout << "\nLa lista de cinco elementos: ";

        // Generar 5 números aleatorios y agregarlos al árbol
        for (int i = 0; i < 5; ++i)
        {
            int num = rand() % 100; // Números aleatorios entre 0 y 99
            cout << num << " ";
            raiz = insertar(raiz, num);
        }
    }
    else
    {
        cout << "Opcion no valida." << endl;
        return 1;
    }

    cout << "\nRecorrido en preorden: ";
    pre_Orden(raiz);
    cout << endl;

    cout << "Recorrido en Inorden: ";
    in_Orden(raiz);
    cout << endl;

    cout << "Recorrido en Postorden: ";
    post_Orden(raiz);
    cout << endl;

    return 0;
}
