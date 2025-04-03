/* Inicializar un arreglo de n datos aleatorios, el usuario determina la longitud N del arreglo del 0 al 100 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

void CREAR_ARREGLO(int A[]);
void IMPRIMIR_ARREGLO(int A[]);

void main(){
    
    int N;
    printf("Ingrese el tamano del arreglo: ");
    scanf("%i", &N);
    int A[N];
    CREAR_ARREGLO(A);
    IMPRIMIR_ARREGLO(A);

    

    getch();
}

void CREAR_ARREGLO(int A[MAX]){
    int i, n;
     srand(time(NULL));
    for ( i = 0; i < n; i++)
    {
        A[i] = rand() % MAX;
}
}

void IMPRIMIR_ARREGLO(int A[MAX]){
    int i, n;
     printf("LOS ELEMENTOS SON: \n");
    for ( i = 0; i < n; i++)
    {
        printf("%i \n", A[i]);
    }
    printf("\n");
}

