
#include <iostream>

using namespace std;

int main()
{
    int renglones, columnas;

    cout << "INGRESE LA PRIMERA DIMENSION DE LA MATRIZ CUADRADA: \n\n";
    cin >> renglones;

    cout << "INGRESE LA SEGUNDA DIMENSION DE LA MATRIZ CUADRADA: \n\n";
    cin >> columnas;

    int matriz_1[renglones][columnas];
    int matriz_2[renglones][columnas];
    int resultado[renglones][columnas];

    cout << "INGRESE LOS ELEMENTOS DE LA PRIMERA MATRIZ: \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_1[i][j];
        }
    }

    cout << "\nINGRESE LOS ELEMENTOS DE LA SEGUNDA MATRIZ: \n\n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cin >> matriz_2[i][j];
        }
    }

    int *p1 = &matriz_1[0][0];
    int *p2 = &matriz_2[0][0];
    int *sumaTotal = &resultado[0][0];

    for (int i = 0; i < renglones * columnas; i++)
    {
        *sumaTotal = *p1 + *p2;
        p1++;
        p2++;
        sumaTotal++;
    }

    cout << "SUMA TOTAL DE LOS ELEMENTOS ES: \n";

    for (int i = 0; i < renglones; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            cout << resultado[i][j]
                 << " ";
        }
        cout << "\n";
    }

    return 0;
}
