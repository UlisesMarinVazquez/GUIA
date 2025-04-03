#include <iostream>

using namespace std;

class ListaCircular
{
private:
    class Nodo
    {
    public:
        int info;
        Nodo *sig;
        Nodo *ant;
    };

    Nodo *raiz;

public:
    ListaCircular();
    ~ListaCircular();
    void insertarPrimero(int x);
    void insertarUltimo(int x);
    bool vacia();
    void imprimir();
    int cantidad();
    void borrar(int pos);
};

ListaCircular::ListaCircular()
{
    raiz = NULL;
}

ListaCircular::~ListaCircular()
{
    if (raiz != NULL)
    {
        Nodo *reco = raiz->sig;
        Nodo *bor;
        while (reco != raiz)
        {
            bor = reco;
            reco = reco->sig;
            delete bor;
        }
        delete raiz;
    }
}

void ListaCircular::insertarPrimero(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else
    {
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
        raiz = nuevo;
    }
}

void ListaCircular::insertarUltimo(int x)
{
    Nodo *nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        nuevo->sig = nuevo;
        nuevo->ant = nuevo;
        raiz = nuevo;
    }
    else
    {
        Nodo *ultimo = raiz->ant;
        nuevo->sig = raiz;
        nuevo->ant = ultimo;
        raiz->ant = nuevo;
        ultimo->sig = nuevo;
    }
}

bool ListaCircular::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

void ListaCircular::imprimir()
{
    if (!vacia())
    {
        Nodo *reco = raiz;
        do
        {
            cout << reco->info << "-";
            reco = reco->sig;
        } while (reco != raiz);
        cout << "\n";
    }
}

int ListaCircular::cantidad()
{
    int cant = 0;
    if (!vacia())
    {
        Nodo *reco = raiz;
        do
        {
            cant++;
            reco = reco->sig;
        } while (reco != raiz);
    }
    return cant;
}

void ListaCircular::borrar(int pos)
{
    if (pos <= cantidad())
    {
        if (pos == 1)
        {
            if (cantidad() == 1)
            {
                delete raiz;
                raiz = NULL;
            }
            else
            {
                Nodo *bor = raiz;
                Nodo *ultimo = raiz->ant;
                raiz = raiz->sig;
                ultimo->sig = raiz;
                raiz->ant = ultimo;
                delete bor;
            }
        }
        else
        {
            Nodo *reco = raiz;
            for (int f = 1; f <= pos - 1; f++)
                reco = reco->sig;
            Nodo *bor = reco;
            Nodo *anterior = reco->ant;
            reco = reco->sig;
            anterior->sig = reco;
            reco->ant = anterior;
            delete bor;
        }
    }
}

int main()
{
    ListaCircular *lc = new ListaCircular();
    lc->insertarPrimero(100);
    lc->insertarPrimero(45);
    lc->insertarPrimero(12);
    lc->insertarPrimero(4);
    cout << "Luego de insertar 4 nodos al principio\n";
    lc->imprimir();
    lc->insertarUltimo(250);
    lc->insertarUltimo(7);
    cout << "Luego de insertar 2 nodos al final\n";
    lc->imprimir();
    cout << "Cantidad de nodos:" << lc->cantidad() << "\n";
    cout << "Luego de borrar el de la primer posicion:\n";
    lc->borrar(1);
    lc->imprimir();
    cout << "Luego de borrar el de la cuarta posicion:\n";
    lc->borrar(4);
    lc->imprimir();
    delete lc;
    return 0;
}
