#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

struct Empleado {
    char nombre[50];
    int numeroEmpleado;
    int horasTrabajadas;
    char fechaInicio[15];
    bool turno;
    float sueldos[3];
};
int main() {
    
    int numEmpleados, V;
    printf("Ingrese el numero de empleados a registrar: ");
    scanf("%d", &numEmpleados);
    struct Empleado empleados[numEmpleados];
    
    for (int i = 0; i < numEmpleados; i++) 
    {
        printf("\nEmpleado %d\n", i+1);
        printf("Ingrese el nombre del empleado: ");
        scanf("%s", empleados[i].nombre);
        printf("Ingresa el numero del empleado: ");
        scanf("%i", empleados[i].numeroEmpleado);
        
       srand(time(NULL));
    
        empleados[i].horasTrabajadas = rand() % 35 + 20;
        int anio = rand() % 10 + 2000;
        int mes = rand() % 12 + 1;
        int dia = rand() % 28 + 1;
        
 printf(empleados[i].fechaInicio, "%02d-%02d-%d", dia, mes, anio);
        for (int j = 0; j < 3; j++) 
        {
            empleados[i].sueldos[j] = rand() % 10001 + 10000;
        }

        empleados[i].turno = rand() % 2;
    }
    printf("\nDatos de los empleados:\n");
    
    for (int i = 0; i < numEmpleados; i++) 
    {
        printf("\nEmpleado %d:\n", i+1);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Número de empleado: %d\n", empleados[i].numeroEmpleado);
        printf("Horas trabajadas: %d\n", empleados[i].horasTrabajadas);
        printf("Fecha de inicio: %s\n", empleados[i].fechaInicio);
        printf("Turno: %s\n", empleados[i].turno ? "Matutino" : "Vespertino");
        printf("Sueldos:\n");

        for (int j = 0; j < 3; j++) 
        {
            printf("$%.2f\n", empleados[i].sueldos[j]);
        }
    }
    return 0;
}