#include <stdio.h>
#include <conio.h>

struct Complejo
{
    int real;
    int imaginario;
};

struct Complejo sumaComplejos(struct Complejo c1, struct Complejo c2)
{
    struct Complejo resultado;
    resultado.real= c1.real + c2.real;
     resultado.imaginario= c1.imaginario + c2.imaginario;
    return resultado;
}

int main()
{
    struct Complejo c1, c2, resultado;
    printf("INGRESE EL PRIMER NUMERO COMPLEJO (parte real e imaginaria separada por un espacio): ");
    scanf("%i %i", &c1.real, &c1.imaginario);
    printf("INGRESE EL SEGUNDO NUMERO COMPLEJO (parte real e imaginaria separada por un espacio): ");
    scanf("%i %i", &c2.real, &c2.imaginario);
    resultado=sumaComplejos(c1, c2);
    printf("LA SUMA DE LOS NUMEROS COMPLEJOS ES: %.2i + %2ii\n", resultado.real, resultado.imaginario);
    getch();

}