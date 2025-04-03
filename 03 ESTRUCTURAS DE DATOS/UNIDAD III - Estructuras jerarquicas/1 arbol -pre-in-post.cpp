#include <iostream>
#include <cstdlib>
using namespace std;

struct nodo
{
    int numero;
    struct nodo *izq, *der;
};

typedef struct nodo *AB;
/* es un puntero de tipo nodo que hemos llamado ABB, que ulitizaremos
   para mayor facilidad de creacion de variables */

AB crearNodo(int x)
{
    AB nuevoNodo = new (struct nodo);
    nuevoNodo->numero = x;
    nuevoNodo->izq = NULL;
    nuevoNodo->der = NULL;

    return nuevoNodo;
}
void insertar(AB &arbol, int x)
{
    if (arbol == NULL)
    {
        arbol = crearNodo(x);
    }
    else if (x < arbol->numero)
        insertar(arbol->izq, x);
    else if (x > arbol->numero)
        insertar(arbol->der, x);
}

void preOrden(AB arbol)
{
    if (arbol != NULL)
    {
        cout << arbol->numero << " ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void enOrden(AB arbol)
{
    if (arbol != NULL)
    {
        enOrden(arbol->izq);
        cout << arbol->numero << " ";
        enOrden(arbol->der);
    }
}

void postOrden(AB arbol)
{
    if (arbol != NULL)
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->numero << " ";
    }
}

void verArbol(AB arbol, int n)
{
    if (arbol == NULL)
        return;
    verArbol(arbol->der, n + 1);

    for (int i = 0; i < n; i++)
        cout << "   ";

    cout << arbol->numero << endl;

    verArbol(arbol->izq, n + 1);
}

int main()
{
    AB arbol = NULL; // creado Arbol

    int n; // numero de nodos del arbol
    int x; // elemento a insertar en cada nodo

    cout << "\n ARBOL BINARIO DE BUSQUEDA\n\n";

    cout << " Numero de nodos del arbol:  ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Numero del nodo " << i + 1 << ": ";
        cin >> x;
        insertar(arbol, x);
    }

    cout << "\n Mostrando ABB \n\n";
    verArbol(arbol, 0);

    cout << "\n Recorridos del ABB";

    cout << "\n\n En orden   :  ";
    enOrden(arbol);
    cout << "\n\n Pre Orden  :  ";
    preOrden(arbol);
    cout << "\n\n Post Orden :  ";
    postOrden(arbol);

    cout << endl
         << endl;

    system("pause");
    return 0;
}