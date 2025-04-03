
#include <iostream>

using namespace std;

void imprimirArreglo(int *p, int b);

int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int *p = array;

    imprimirArreglo(p, 5);

    return 0;
}

void imprimirArreglo(int *p, int b)
{
    cout << "Mi arreglo es: ";

    for (int i = 0; i < b; i++)
    {
        cout << *(p + i) << " ";
    }
}
