#include <stdio.h>
#include <conio.h>
#include <math.h>

float A,B,C,X1,X2;

int main()

{
printf("Ingresa el termino cuadratico:");
scanf("%f", &A);

printf("Ingresa el termino lineal:");
scanf("%f", &B);

printf("Ingresa el termino independiente:");
scanf("%f", &C);


X1=((B*(-1))+((sqrt((B*B)-(4*A*C)))/2*A));
X2=((B*(-1))-((sqrt((B*B)-(4*A*C)))/2*A));

printf("El resultado de X1 es: %f", X1);
printf("El resultado de X2 es: %f", X2);

getch();

}



