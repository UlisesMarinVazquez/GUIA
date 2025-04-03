
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class HashTable
{
private:
    int size;
    vector<pair<string, int>> table;

    // Función de hash por residuo
    int hashFunction(const string &key)
    {
        int sum = 0;
        for (char ch : key)
        {
            sum += static_cast<int>(ch);
        }
        return sum % size;
    }

public:
    HashTable(int tableSize) : size(tableSize), table(tableSize, make_pair("", 0)) {}

    // Insertar un par clave-valor en la tabla hash
    void insert(const string &key, int value)
    {
        int index = hashFunction(key);

        // Resolución de colisiones mediante búsqueda lineal
        while (table[index].first != "")
        {
            index = (index + 1) % size;
        }

        table[index] = make_pair(key, value);
    }

    // Buscar el valor asociado a una clave
    int search(const string &key)
    {
        int index = hashFunction(key);

        // Búsqueda con resolución lineal
        while (table[index].first != "" && table[index].first != key)
        {
            index = (index + 1) % size;
        }

        if (table[index].first == key)
        {
            return table[index].second;
        }
        else
        {
            return -1; // Valor predeterminado para indicar que la clave no se encontró
        }
    }
};

int main()
{
    HashTable hashTable(10);

    hashTable.insert("apple", 5);
    hashTable.insert("banana", 8);
    hashTable.insert("orange", 12);

    cout << "Value for key 'banana': " << hashTable.search("banana") << endl; // Salida esperada: 8
    cout << "Value for key 'grape': " << hashTable.search("grape") << endl;   // Salida esperada: -1

    return 0;
}
