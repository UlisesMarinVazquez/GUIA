1 

#include <stdio.h>

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
    printf("INGRESE EL PRIMER NUMERO COMPLEJO : ");
    scanf("%i %i", &c1.real, &c1.imaginario);
    printf("INGRESE EL SEGUNDO NUMERO COMPLEJO : ");
    scanf("%i %i", &c2.real, &c2.imaginario);
    resultado=sumaComplejos(c1, c2);
    printf("LA SUMA DE LOS NUMEROS COMPLEJOS ES: %.2i + %2ii\n", resultado.real, resultado.imaginario);
    getch();
}

2

#include <stdio.h>

void suma ();

struct complejos
{
int r,i;
};

main()
{
suma ();
getch();
}

void suma ()
{
complejos comple1, comple2, res;


printf("\nIngresa el numero real: ");
scanf("%i",&comple1.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple1.i);

printf("%i + %ii", comple1.r, comple1.i);


printf("\nIngresa el numero real: ");
scanf("%i",&comple2.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple2.i);

printf("%i + %ii", comple2.r, comple2.i);

res.r = (comple1.r + comple2.r);
res.i = (comple1.i + comple2.i);

printf("\n\nLa suma es: %i + %ii", res.r, res.i);
}

3

#include <stdio.h>

struct complejos
{
int r,i;
};
complejos suma ();
 
main()
{
complejos RES;
RES=suma ();
printf("\n\nLa suma es: %i + %ii", RES.r, RES.i);
getch();
}

complejos suma ()
{
complejos comple1, comple2, res;


printf("\nIngresa el numero real: ");
scanf("%i",&comple1.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple1.i);
printf("%i + %ii", comple1.r, comple1.i);

printf("\nIngresa el numero real: ");
scanf("%i",&comple2.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple2.i);

printf("%i + %ii", comple2.r, comple2.i);

res.r = (comple1.r + comple2.r);
res.i = (comple1.i + comple2.i);
return res;
}


4

#include <stdio.h>


struct complejos
{
int r,i;
};
void suma (complejos, complejos);
 
main()
{
complejos comple1, comple2, res;


printf("\nIngresa el numero real: ");
scanf("%i",&comple1.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple1.i);
printf("%i + %ii", comple1.r, comple1.i);


printf("\nIngresa el numero real: ");
scanf("%i",&comple2.r);
printf("Ingresa el numero imaginario: ");
scanf("%i",&comple2.i);

printf("%i + %ii", comple2.r, comple2.i);
suma (comple1, comple2);
getch();
}

void suma (complejos comple1, complejos comple2)
{
complejos res;

res.r = (comple1.r + comple2.r);
res.i = (comple1.i + comple2.i);

printf("\n\nLa suma es: %i + %ii", res.r, res.i);
}


5

#include <iostream>

using namespace std;

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
    cout<<"INGRESE EL PRIMER NUMERO COMPLEJO : ";
    cin >> c1.real >> c1.imaginario;
    cout << "INGRESE EL SEGUNDO NUMERO COMPLEJO : ";
    cin >> c2.real >> c2.imaginario;
    resultado = sumaComplejos(c1, c2);
    cout << "LA SUMA ES: " << resultado.real << " + " << resultado.imaginario << "i" << endl;
    getch();

}