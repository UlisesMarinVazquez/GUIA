#include <stdio.h>

void INTRODUCIR(int *A, int n, int p, int v) {
    if (p < 0 || p >= n) {
        printf("Posición invalida.\n");
    } else {
        *(A + p) = v;
    }
}

void ELIMINAR(int *A, int n, int p) {
    if (p < 0 || p >= n) {
        printf("Posición invalida.\n");
    } else {
        for (int i = p; i < n - 1; i++) {
            *(A + i) = *(A + i + 1);
        }
        *(A + n - 1) = 0;
    }
}

int UBICAR(int *A, int n, int v) {
    for (int i = 0; i < n; i++) {
        if (*(A + i) == v) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[10] = {0};
    int n = 10;
    int p, v;
    int op;

    do {
        printf("\n1. Introducir valor en posicion\n");
        printf("2. Eliminar valor en posicion\n");
        printf("3. Ubicar valor en arreglo\n");
        printf("4. Salir\n");
        printf("Ingrese una opcion: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Ingrese la posicion a introducir: ");
                scanf("%d", &p);
                printf("Ingrese el valor a introducir: ");
                scanf("%d", &v);
                INTRODUCIR(A, n, p, v);
                printf("El arreglo es: ");
                
                for (int i = 0; i < n; i++) {
                    printf("%d ", *(A + i));
                }
                printf("\n");
                break;

            case 2:
                printf("Ingrese la posicion a eliminar: ");
                scanf("%d", &p);
                ELIMINAR(A, n, p);
                printf("El arreglo es: ");
                for (int i = 0; i < n; i++) {
                    printf("%d ", *(A + i));
                }
                printf("\n");
                break;

            case 3:
                printf("Ingrese el valor a ubicar: ");
                scanf("%d", &v);
                p = UBICAR(A, n, v);
                if (p == -1) {
                    printf("El valor no se encuentra en el arreglo.\n");
                } else {
                    printf("El valor se encuentra en la posicion %d.\n", p);
                }
                break;

            case 4:
                printf("Saliendo del programa...\n");
                break;

            default:
                printf("Opción invalida.\n");
                break;
        }
    } while (op != 4);

    return 0;
}
