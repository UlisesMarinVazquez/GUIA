#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> matriz; // Definimos la matriz

// Creamos una función que inicialice la matriz con n nodos.
void crearMatriz(int n)
{
    for (int i = 0; i < n; i++)
    {
        vector<int> row(n, 0);
        matriz.push_back(row);
    }
}

// Creamos una función que agregue una conexión entre nodos.
void anadirConexion(int a, int b)
{
    matriz[a][b] = 1;
    matriz[b][a] = 1;
}

int main()
{
    int n; // Cantidad de nodos del grafo
    cin >> n;
    crearMatriz(n); // Se llama a la función crear matriz con n
    int q;          // Cantidad de aristas
    cin >> q;       // Se añade la lectura de la cantidad de aristas
    while (q--)
    { // Se ingresan las q aristas entre un nodo a y b
        int a, b;
        cin >> a >> b;
        anadirConexion(a, b);
    }

    return 0;
}
