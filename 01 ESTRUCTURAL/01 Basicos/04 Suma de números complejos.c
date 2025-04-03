#include <stdio.h>
#include <conio.h>

float R1,R2,R3,I1,I2,I3;

int main()

{
    printf("INGRESA LA PARTE REAL DE TU PRIMER NUMERO COMPLEJO:");
    scanf("%f", &R1);

    printf("INGRESA LA PARTE IMAGINARIA DE TU PRIMER NUMERO COMPLEJO:");
    scanf("%f", &I1);

    printf("INGRESA LA PARTE REAL DE TU SEGUNDO NUMERO COMPLEJO:");
    scanf("%f", &R2);

    printf("INGRESA LA PARTE IMAGINARIA DE TU SEGUNDO NUMERO COMPLEJO:");
    scanf("%f", &I2);

R3=R1+R2;
I3=I1+I2;

printf("LA SUMA DE TU NUMERO COMPLEJO ES: %f + %fi", R3,I3);

getch();
        
}