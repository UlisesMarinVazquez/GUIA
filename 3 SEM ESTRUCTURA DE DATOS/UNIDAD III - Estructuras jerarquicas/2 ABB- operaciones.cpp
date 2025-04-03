#include <iostream>

using namespace std;

struct nodoDeArbol
{
    int dato;
    nodoDeArbol *izquierda;
    nodoDeArbol *derecha;

    nodoDeArbol(int val) : dato(val), izquierda(nullptr), derecha(nullptr) {}
};

nodoDeArbol *insertar(nodoDeArbol *raiz, int valor)
{
    if (raiz == nullptr)
    {
        return new nodoDeArbol(valor);
    }

    if (valor < raiz->dato)
    {
        raiz->izquierda = insertar(raiz->izquierda, valor);
    }
    else
    {
        raiz->derecha = insertar(raiz->derecha, valor);
    }

    return raiz;
}

nodoDeArbol *findMin(nodoDeArbol *raiz)
{
    while (raiz->izquierda != nullptr)
    {
        raiz = raiz->izquierda;
    }
    return raiz;
}

nodoDeArbol *remover(nodoDeArbol *raiz, int valor)
{
    if (raiz == nullptr)
    {
        return raiz;
    }

    if (valor < raiz->dato)
    {
        raiz->izquierda = remover(raiz->izquierda, valor);
    }
    else if (valor > raiz->dato)
    {
        raiz->derecha = remover(raiz->derecha, valor);
    }
    else
    {
        // Nodo con un solo hijo o sin hijos
        if (raiz->izquierda == nullptr)
        {
            nodoDeArbol *temp = raiz->derecha;
            delete raiz;
            return temp;
        }
        else if (raiz->derecha == nullptr)
        {
            nodoDeArbol *temp = raiz->izquierda;
            delete raiz;
            return temp;
        }

        // Nodo con dos hijos, obtenemos el sucesor inorden (menor en el subárbol derecho)
        nodoDeArbol *temp = findMin(raiz->derecha);

        // Copiamos el sucesor inorden al nodo actual
        raiz->dato = temp->dato;

        // Eliminamos el sucesor inorden
        raiz->derecha = remover(raiz->derecha, temp->dato);
    }

    return raiz;
}

void preOrden(nodoDeArbol *raiz)
{
    if (raiz != nullptr)
    {
        cout << raiz->dato << " ";
        preOrden(raiz->izquierda);
        preOrden(raiz->derecha);
    }
}

void inOrden(nodoDeArbol *raiz)
{
    if (raiz != nullptr)
    {
        inOrden(raiz->izquierda);
        cout << raiz->dato << " ";
        inOrden(raiz->derecha);
    }
}

void postOrden(nodoDeArbol *raiz)
{
    if (raiz != nullptr)
    {
        postOrden(raiz->izquierda);
        postOrden(raiz->derecha);
        cout << raiz->dato << " ";
    }
}

int main()
{
    nodoDeArbol *raiz = nullptr;
    int n;

    cout << "Ingresa la cantidad de numeros enteros: ";
    cin >> n;

    cout << "Ingresa los numeros enteros uno por uno:" << endl;
    for (int i = 0; i < n; ++i)
    {
        int num;
        cin >> num;
        raiz = insertar(raiz, num);
    }

    cout << "Recorrido en Preorden: ";
    preOrden(raiz);

    cout << "\nRecorrido en Inorden: ";
    inOrden(raiz);

    cout << "\nRecorrido en Postorden: ";
    postOrden(raiz);

    // Eliminar un elemento
    int elementoAEliminar;
    cout << "\n\nIngresa el elemento que deseas eliminar: ";
    cin >> elementoAEliminar;

    raiz = remover(raiz, elementoAEliminar);

    // Mostrar el árbol después de la eliminación
    cout << "\nArbol despues de la eliminacion: ";
    inOrden(raiz);

    return 0;
}