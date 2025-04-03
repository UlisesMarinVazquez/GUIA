
#include <iostream>

using namespace std;

int main()
{
    const int renglones = 3;
    const int columnas = 3;
    int sumaTotal = 0;

    int matriz_1[renglones][columnas];
    int matriz_2[renglones][columnas];

    cout << "INGRESE LOS ELEMENTOS DE LA PRIMERA MATRIZ (3x3): \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_1[i][j];
        }
    }

    cout << "\nINGRESE LOS ELEMENTOS DE LA SEGUNDA MATRIZ (3x3): \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_2[i][j];
        }
    }

    cout << "\nMATRIZ 1 (3x3):\n\n";
    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {

            cout << matriz_1[i][j] << " \t";
        }
        cout << endl;
    }

    cout << "\n\t+\n";

    cout << "\nMATRIZ 2 (3x3):\n";
    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << matriz_2[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            sumaTotal += matriz_1[i][j] + matriz_2[i][j];
        }
    }

    cout << "\nLA SUMA TOTAL DE LOS ELEMENTOS ES: " << sumaTotal << endl;
    return 0;
}
