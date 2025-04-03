#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>


struct EMPLEADO {
    char n[50];
    int noemp;
    int h;
    char fechaInicio[15];
    bool t;
    float sueldos[3];
};

int main() 
{
    int numEmpleados, i, num, encontrado1, encontrado2, m;
    float sumasalario;
    printf("Ingrese el numero de empleados a registrar: ");
    scanf("%d", &numEmpleados);
    struct EMPLEADO empleados[numEmpleados];
    
    srand(time(NULL));

    for (int i = 0; i < numEmpleados; i++) 
    {
        printf("\nEmpleado %d\n", i+1);
        printf("Ingrese el nombre del empleado: ");
        scanf("%s", empleados[i].n);
        printf("Ingrese el numero de empleado: ");
         scanf("%d", &empleados[i].noemp);
    
       
      
        empleados[i].h = rand() % 35 + 20;
        int anio = rand() % 10 + 2000;
        int mes = rand() % 12 + 1;
        int dia = rand() % 28 + 1;
        sprintf(empleados[i].fechaInicio, "%02d-%02d-%d", dia, mes, anio);

        for (int j = 0; j < 3; j++) 
        {
            empleados[i].sueldos[j] = rand() % 10001 + 10000;
        }
        empleados[i].t = rand() % 2;
    }
    
    printf("\nDatos de los empleados:\n");

    for (int i = 0; i < numEmpleados; i++) 
    {
        printf("\nEmpleado %d:\n", i+1);
        printf("Nombre: %s\n", empleados[i].n);
        printf("Numero de empleado: %d\n", empleados[i].noemp);
        printf("Horas trabajadas: %d\n", empleados[i].h);
        printf("Fecha de inicio: %s\n", empleados[i].fechaInicio);
        printf("Turno: %s\n", empleados[i].t ? "Matutino" : "Vespertino");
        printf("Sueldos:\n");

        for (int j = 0; j < 3; j++) 
        {
            printf("$%.2f\n", empleados[i].sueldos[j]);
        }
    }

    printf("\n");
    printf("Ingrese el numero de empleado a buscar: \n");
    scanf("%i", &num);
    encontrado1=0;
    for ( i = 0; i < numEmpleados; i++)
    {
        if (empleados[i].noemp == num)
        {
        encontrado1=1;
        printf("\nEmpleado %d:\n", i+1);
        printf("Nombre: %s\n", empleados[i].n);
        printf("Numero de empleado: %d\n", empleados[i].noemp);
        printf("Horas trabajadas: %d\n", empleados[i].h);
        printf("Fecha de inicio: %s\n", empleados[i].fechaInicio);
        printf("Turno: %s\n", empleados[i].t ? "Matutino" : "Vespertino");
        printf("Sueldos:\n");

        for (int j = 0; j < 3; j++) 
        {
            printf("$%.2f\n", empleados[i].sueldos[j]);
            sumasalario += empleados[i].sueldos[j];
        }
            
            printf("\n La suma de los salario es: %.2f\n", sumasalario);
        break;
        }
        
    }


    return 0;
}