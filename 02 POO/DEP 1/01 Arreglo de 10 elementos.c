/* Inicializar un arreglo de 10 elementos, los datos los ingresa el usuario. */

#include <stdio.h>

#define MAX 10

void CREAR_ARREGLO(int A[]);
void IMPRIMIR_ARREGLO(int A[]);

int main(){
    int A[MAX];
    CREAR_ARREGLO(A);
    IMPRIMIR_ARREGLO(A);
    getch();
}

void CREAR_ARREGLO(int A[MAX]){
    int i;
    printf("INGRESE 10 ELEMENTOS ENTEROS: %i\n ", i);
    for ( i = 0; i < 10; i++)
    {
        
        scanf("%i", &A[i]);
}
}

void IMPRIMIR_ARREGLO(int A[MAX]){
    int i;
     printf("LOS ELEMENTOS SON: \n");
    for ( i = 0; i < 10; i++)
    {
        printf("%i ", A[i]);
    }
}
