
#include <conio.h>
#include <iostream>

using namespace std;

struct Nodo
{
    int i;
    Nodo *s;
} *a, *i, *p, *e;

int da;

int buscar(int d);
void insertar(int dat);
void mostrar(void);
void borrar(void);
void menu(void);
void guardar(void);
void cargar(void);

int main()
{
    menu();
    return 0;
}

void menu(void)
{
    int opc, da;
    do
    {
        cout << "\n1 - Buscar datos";
        cout << "\n2 - Insertar datos";
        cout << "\n3 - Mostrar todos los datos";
        cout << "\n4 - Borrar un dato";
        cout << "\n5 - Guardar datos a Archivo";
        cout << "\n6 - Cargar datos de Archivo";
        cout << "\n0 - Finalizar";
        cout << "\n\nSeleccione opcion: ";
        cin >> opc;
        switch (opc)
        {
        case 0:
            cout << "\n\nFinaliza el programa";
            getch();

            p = i;
            while (p)
            {
                a = p;
                p = p->s;
                delete (a);
            }
            exit(0);
        case 1:
            cout << "\n\nIngrese dato a buscar: ";
            cin >> da;
            if (buscar(da))
                cout << "\n\nDato existe";
            else
                cout << "\n\nDato NO EXISTE";
            getch();
            break;
        case 2:
            cout << "Ingrese dato: ";
            cin >> da;
            insertar(da);
            break;
        case 3:
            mostrar();
            break;
        case 4:
            borrar();
            break;
        case 5:
            guardar();
            break;
        case 6:
            cargar();
            break;
        default:
            cout << "\n\nOPCION NO VALIDA!!!";
            getch();
        }
    } while (opc);
}

void mostrar(void)
{
    int cont = 1;
    if (!i)
    {
        cout << "\n\nNO HAY LISTA PARA MOSTRAR";
        getch();
        return;
    }
    p = i;
    cout << endl
         << endl;
    while (p)
    {
        cout << cont++ << " - Valor = " << p->i << endl;
        p = p->s;
    }
    cout << "\n\nEso es todo";
    getch();
}

int buscar(int d)
{
    if (!i)
    {
        cout << "No hay datos en la lista!!!";
        getch();
        return (0);
    }
    p = i;
    a = NULL;
    while (p->s && p->i < d)
    {
        a = p;
        p = p->s;
    }
    return (p->i == d ? 1 : 0);
}

void insertar(int dat)
{
    if (!i)
    {
        i = new (Nodo);
        i->s = NULL;
        i->i = dat;
        return;
    }
    if (buscar(dat))
    {
        cout << "\n\nDato existente";
        getch();
        return;
    }
    e = new (Nodo);
    e->i = dat;
    if (p == i && p->s)
    {
        e->s = p;
        i = e;
        return;
    }
    if (p == i && !p->s)
    {
        if (p->i < e->i)
        {
            p->s = e;
            e->s = NULL;
        }
        else
        {
            e->s = p;
            i = e;
        }
        return;
    }
    if (p->s)
    {
        a->s = e;
        e->s = p;
        return;
    }
    if (e->i > p->i)
    {
        e->s = NULL;
        p->s = e;
    }
    else
    {
        a->s = e;
        e->s = p;
    }
}

void borrar(void)
{
    cout << "\n\nIngrese dato a eliminar: ";
    cin >> da;
    if (buscar(da))
    {
        if (a)
            a->s = p->s;
        else
            i = p->s;
        delete (p);
        cout << "\n\nDato eliminado";
    }
    else
        cout << "\n\nDato no se encuentra";
    getch();
}

void guardar(void)
{
    FILE *arch;
    arch = fopen("DATOS-A.TXT", "w");
    if (!i)
    {
        cout << "\n\nNO HAY LISTA PARA GUARDAR";
        getch();
        return;
    }
    p = i;
    while (p)
    {
        fprintf(arch, "%i\n", p->i);
        p = p->s;
    }
    cout << "\n\nArchivo Guardado";
    fclose(arch);
    getch();
}

void cargar(void)
{
    int c, x;
    FILE *arch;
    arch = fopen("DATOS-A.TXT", "r");
    if (!arch)
    {
        cout << "\n\nNO EXISTE EL ARCHIVO";
        getch();
        return;
    }

    do
    {
        c = fscanf(arch, "%i\n", &x);
        if (c != EOF)
        {
            insertar(x);
        }
    } while (c != EOF);
    cout << "\n\nArchivo Cargado";
    fclose(arch);
    getch();
}