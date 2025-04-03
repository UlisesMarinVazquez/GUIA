
#include <iostream>

using namespace std;

int main()
{
    const int renglones = 3;
    const int columnas = 3;
    int sumaTotal = 0;

    int matriz_1[renglones][columnas];
    int matriz_2[renglones][columnas];

    cout << "INGRESE LOS 9 ELEMENTOS DE LA PRIMERA MATRIZ: \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_1[i][j];
        }
    }

    cout << "\nINGRESE LOS 9 ELEMENTOS DE LA SEGUNDA MATRIZ: \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_2[i][j];
        }
    }

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            sumaTotal += matriz_1[i][j] + matriz_2[i][j];
        }
    }

    cout << "SUMA TOTAL DE LOS ELEMENTOS ES: " << sumaTotal;
    return 0;
}
