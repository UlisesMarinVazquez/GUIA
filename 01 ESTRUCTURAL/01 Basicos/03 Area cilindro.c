#include <stdio.h>
#include <conio.h>
#define PI 3.1416

float RADIO, ALTURA, AREA;

void main()

{
    printf("ingresa el radio:");
    scanf("%f", &RADIO);

    printf("ingresa la altura:");
    scanf("%f", &ALTURA);
    
    AREA=2*PI*RADIO*ALTURA;

    printf("El area es: %f", AREA);
    getch();
}