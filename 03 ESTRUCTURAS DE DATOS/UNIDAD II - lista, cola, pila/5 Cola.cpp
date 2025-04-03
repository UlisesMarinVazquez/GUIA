#include <iostream>
using namespace std;

struct Nodo
{
    int dato;
    Nodo *s;
} *p, *aux, *u;

void insertar(int dat);
void borrar();
void listar();
void empty(); // Prototipo de la función empty

int main()
{
    int opc, y;
    do
    {
        cout << "\n\n1. Insertar PUSH";
        cout << "\n2. Borrar POP";
        cout << "\n3. Mostrar";
        cout << "\n4. Vaciar cola EMPTY";
        cout << "\n5. Salir";
        cout << "\n\n Ingrese opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 1:
            cout << "\nIngrese dato: ";
            cin >> y;
            insertar(y);
            cout << "\nDato insertado.";
            break;
        case 2:
            borrar();
            break;
        case 3:
            listar();
            break;
        case 4:
            empty();
            cout << "\nCola vaciada.";
            break;
        case 5:
            exit(1);
        default:
            cout << "\nOpcion no valida.";
            break;
        }
    } while (opc);

    return 0;
}

void insertar(int dat)
{
    aux = new Nodo;
    aux->dato = dat;
    if (u)
    {
        u->s = aux;
        aux->s = NULL;
        u = aux;
    }
    else
    {
        p = u = aux;
    }
}

void borrar()
{
    if (p)
    {
        aux = p;
        cout << "\nElimino a " << p->dato;
        p = aux->s;
        delete (aux);
    }
    else
    {
        cout << "\n No hay datos.";
    }
}

void listar()
{
    if (!u)
    {
        cout << "\n No hay datos en la cola.";
        return;
    }
    aux = p;
    while (aux)
    {
        cout << "\n"
             << aux->dato;
        aux = aux->s;
    }
}

void empty()
{
    while (p)
    {
        aux = p;
        p = aux->s;
        delete (aux);
    }
    u = NULL;
}
