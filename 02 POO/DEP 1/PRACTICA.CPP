#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdbool.h>


struct PACIENTE 
{
char nombre[50];
int edad;
char sexo;
char seguro[10];
bool tiene_seguro;
int telefono;
char calle[100];
int num;
char ciudad[50];

};

int main() 
{
struct PACIENTE pacientes[100];
char nomb;
int n, i, totalPacientes = 0, ninos = 0, jovenes = 0, adultos = 0, mujeres = 0, hombres = 0, seguros = 0;
int encontrado1;
float porcentaje_n, porcentaje_j, porcentaje_a, porcentaje_s;

printf("Ingrese la cantidad de pacientes hospitalizados: ");
scanf("%d", &n);

for (i = 0; i < n; i++) {
    printf("\nIngrese el nombre del paciente: ");
    scanf("%s", pacientes[i].nombre);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &pacientes[i].edad);
    printf("Ingrese el genero del paciente (M/F): ");
    scanf(" %c", &pacientes[i].sexo);
    printf("\nIngrese la calle del paciente: ");
    scanf("%s", pacientes[i].calle);
    printf("Ingrese el numero de la calle del paciente: ");
    scanf("%d", &pacientes[i].num);
     printf("\nIngrese la ciudad del paciente: ");
    scanf("%s", pacientes[i].ciudad);
    printf("Tiene seguro medico? (Si/No): ");
    scanf("%s", pacientes[i].seguro);

    if (pacientes[i].sexo == 'F') {
        mujeres++;
    } else {
        hombres++;
    }

    if (pacientes[i].seguro[0] == 'S') {
        seguros++;
    }

    if (pacientes[i].edad <= 13) {
        ninos++;
    } else if (pacientes[i].edad <= 30) {
        jovenes++;
    } else {
        adultos++;
    }

    totalPacientes++;
}




printf("\nNombres de todos los pacientes hospitalizados:\n");
for (i = 0; i < n; i++) 
{
    printf("- %s\n", pacientes[i].nombre);
}
porcentaje_n = (float)ninos / totalPacientes * 100;
porcentaje_j = (float)jovenes / totalPacientes * 100;
porcentaje_a = (float)adultos / totalPacientes * 100;

printf("\nPorcentaje de pacientes hospitalizados:\n");
printf("- Ninos hasta 13 anos: %.2f%%\n", porcentaje_n);
printf("- Jovenes mayores de 13 y menores de 30 anos: %.2f%%\n", porcentaje_j);
printf("- Adultos mayores de 30 anos: %.2f%%\n", porcentaje_a);


printf("\nCantidad de mujeres y hombres hospitalizados:\n");
printf("- Mujeres: %d\n", mujeres);
printf("- Hombres: %d\n", hombres);

int count_seguro = 0;
for (int i = 0; i < 100; i++) 
{
    if (pacientes[i].tiene_seguro) {
        count_seguro++;
    }
}

float porcentaje_seguro = (float)count_seguro / 100 * 100;
printf("Porcentaje de pacientes con seguro médico: %.2f%%\n", porcentaje_seguro);


printf("\n");

    printf("Ingrese el nombre del paciente a buscar: \n");
    scanf("%s", &nomb);
    encontrado1=0;
    for ( i = 0; i < 100; i++) 
        {
            if (pacientes[i].nombre == nomb)
        {
        encontrado1=1;
        printf("Los datos del paciente\n", nomb);
        printf("Edad: %d\n", pacientes[i].edad);
        
        break;
        }
        }

return 0;
}