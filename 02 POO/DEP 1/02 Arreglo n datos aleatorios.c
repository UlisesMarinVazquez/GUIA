/* Inicializar un arreglo de n datos aleatorios */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void CREAR_ARREGLO(int A[]);
void IMPRIMIR_ARREGLO(int A[]);

void main(){
    
    int A[MAX];
    CREAR_ARREGLO(A);
    IMPRIMIR_ARREGLO(A);


    getch();
}

void CREAR_ARREGLO(int A[MAX]){
    int i;
     srand(time(NULL));
    for ( i = 0; i < 100; i++)
    {
        A[i] = rand() % 101;
}
}

void IMPRIMIR_ARREGLO(int A[MAX]){
    int i;
     printf("LOS ELEMENTOS SON: \n");
    for ( i = 0; i < 100; i++)
    {
        printf("%i \n", A[i]);
    }
    printf("\n");
}

