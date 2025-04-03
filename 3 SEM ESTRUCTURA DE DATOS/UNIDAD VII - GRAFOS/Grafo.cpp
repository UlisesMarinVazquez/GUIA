#include <iostream>
#include <vector>
using namespace std;

// Estructura de datos para almacenar un borde de Grafo
struct Edge
{
    int src, dest;
};

// Una clase para representar un objeto Grafo
class Grafo
{
public:
    // un vector de vectores para representar una lista de adyacencia
    vector<vector<int>> adjList;

    // Constructor de Grafo
    Grafo(vector<Edge> const &bordes, int n)
    {
        // cambiar el tamaño del vector para contener `n` elementos de tipo `vector<int>`
        adjList.resize(n);

        // agrega bordes al grafo no dirigido
        for (auto &edge : bordes)
        {
            adjList[edge.src].push_back(edge.dest);
            adjList[edge.dest].push_back(edge.src);
        }
    }
};

// Función para realizar el recorrido DFS en el Grafo en un Grafo
void DFS(Grafo const &Grafo, int v, vector<bool> &discovered)
{
    // marca el nodo actual como descubierto
    discovered[v] = true;

    // imprime el nodo actual
    cout << v << " ";

    // hacer para cada borde (v, u)
    for (int u : Grafo.adjList[v])
    {
        // si aún no se ha descubierto `u`
        if (!discovered[u])
        {
            DFS(Grafo, u, discovered);
        }
    }
}

int main()
{
    // vector de los bordes del Grafo según el diagrama anterior
    vector<Edge> bordes = {
        // Observe que el nodo 0 no está conectado
        {1, 2},
        {1, 7},
        {1, 8},
        {2, 3},
        {2, 6},
        {3, 4},
        {3, 5},
        {8, 9},
        {8, 12},
        {9, 10},
        {9, 11}};

    // número total de nodos en el Grafo (etiquetados de 0 a 12)
    int n = 13;

    // construye un Grafo a partir de los bordes dados
    Grafo Grafo(bordes, n);

    // para realizar un seguimiento de si se descubre un vértice o no
    vector<bool> discovered(n);

    // Realizar el recorrido DFS de todos los nodos no descubiertos a
    // cubrir todos los componentes conectados de un Grafo
    for (int i = 0; i < n; i++)
    {
        if (discovered[i] == false)
        {
            DFS(Grafo, i, discovered);
        }
    }

    return 0;
}