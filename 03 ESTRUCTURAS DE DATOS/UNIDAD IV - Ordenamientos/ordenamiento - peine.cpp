
#include <iostream>
using namespace std;

int updateGap(int gap)
{
    gap = (gap * 10) / 13;
    if (gap < 1)
        return 1;
    else
        return gap;
}

void combSort(int arr[], int n)
{
    int gap = n;
    bool swapped = true;
    while (gap > 1 || swapped == true)
    {
        gap = updateGap(gap);
        swapped = false;
        for (int i = 0; i < (n - gap); i++)
        {
            int temp;
            if (arr[i] > arr[i + gap])
            {
                temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = true;
            }
        }
    }
}

int main()
{
    int n = 6;
    int arr[6] = {5, 3, 4, 2, 1, 6};
    cout << "Arreglo de entrada: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    combSort(arr, n);
    cout << "Arreglo de salida: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}