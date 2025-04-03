

#include <iostream>

using namespace std;

void arrayDefinido(int[]);

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    arrayDefinido(array);

    return 0;
};

void arrayDefinido(int arr[])
{
    cout << "Mi arreglo es: \n";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << "\n";
    }
}



