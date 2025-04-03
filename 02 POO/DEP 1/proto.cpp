#include <stdio.h>

#define MAX 10

int main()
{
    int arr[MAX] = {1, 2, 3, 4, 5};
    int *ptrInicio = arr;
    int *ptrFinal = arr + 4;
    int opcion;
    int valor;
    
    // Imprime el arreglo original
    printf("Arreglo original: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Pide al usuario que introduzca un nuevo elemento al inicio o final del arreglo
    printf("¿Desea introducir un elemento al inicio (1) o al final (2) del arreglo?\n");
    scanf("%d", &opcion);
    printf("Introduzca el valor del elemento: ");
    scanf("%d", &valor);
    if (opcion == 1) {
        // Introduce un nuevo elemento al inicio del arreglo
        for (int i = 4; i >= 0; i--) {
            *(ptrInicio + i + 1) = *(ptrInicio + i);
        }
        *ptrInicio = valor;
    } else if (opcion == 2) {
        // Introduce un nuevo elemento al final del arreglo
        *(ptrFinal + 1) = valor;
    }

    // Imprime el arreglo actualizado
    printf("Arreglo con elemento introducido: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Pide al usuario que elimine un elemento al inicio o final del arreglo
    printf("¿Desea eliminar un elemento al inicio (1) o al final (2) del arreglo?\n");
    scanf("%d", &opcion);
    if (opcion == 1) {
        // Elimina el primer elemento del arreglo
        for (int i = 0; i < 6; i++) {
            *(ptrInicio + i) = *(ptrInicio + i + 1);
        }
    } else if (opcion == 2) {
        // Elimina el último elemento del arreglo
        *(ptrFinal) = 0;
    }

    // Imprime el arreglo actualizado
    printf("Arreglo con elemento eliminado: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");

    // Pide al usuario que ubique la posición de un elemento del arreglo
    printf("¿Qué elemento del arreglo desea ubicar? (Ingrese un valor del 1 al 5)\n");
    scanf("%d", &opcion);
    int pos = opcion - 1;
    int *ptrPos = arr + pos;

    // Imprime la posición del elemento del arreglo
    printf("La posición del elemento %d del arreglo es: %d\n", opcion, pos);
    printf("El valor del elemento %d del arreglo es: %d\n", opcion, *ptrPos);

    return 0;
}
