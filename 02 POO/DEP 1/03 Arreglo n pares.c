/* Inicializar un arreglo de n datos, los datos deben ser los primeros n números pares */

#include <stdio.h>
#include <conio.h>
#define MAX 100

void CREAR_ARREGLO(int A[],int n);
void IMPRIMIR_ARREGLO(int A[],int n);


void main(){
    int N;
    int A[MAX];
    printf("INGRESE EL NUMERO DE DATOS: ");
    scanf("%i", &N);
    CREAR_ARREGLO(A,N);
    printf("LOS PRIMEROS PARES SON: \n");
    IMPRIMIR_ARREGLO(A,N);
}


void CREAR_ARREGLO(int A[MAX],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        A[i]=2*(i+1);
}
}


void IMPRIMIR_ARREGLO(int A[MAX],int n){
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%i ", A[i]);
    }
}

