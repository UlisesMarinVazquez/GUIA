

#include <iostream>

using namespace std;

int main()
{

    int array[3];
    int a;
    int *p = array;

    cout << "Ingresa los elementos para el arreglo: \n";

    for (int i = 0; i < 3; i++)
    {
        cin >> a;
        *(p + i) = a;
    }

    cout << "Los elementos son: \n";

    for (int i = 0; i < 3; i++)
    {
        cout << *(p + i) << " ";
    }

    return 0;
}