/* Realiza un programa que le da un incremento de salario del % 8 */

#include <stdio.h>
#include <conio.h>

float SALARIO, SUELDOACTUAL;
void main()

{
    printf("Ingresa el salario:");
    scanf("%f",&SALARIO);

    SUELDOACTUAL=(SALARIO*0.08)+SALARIO;

    printf("El sueldo actual es: %f", SUELDOACTUAL);

getch();
}