#include <stdio.h>
#include <string.h>
#include <string.h>
#include <stdbool.h>


struct Paciente {
char nombre[50];
int edad;
char genero;
char seguro[10];
bool tiene_seguro;
};

int main() {
struct Paciente pacientes[100];
int n, i, totalPacientes = 0, ninos = 0, jovenes = 0, adultos = 0, mujeres = 0, hombres = 0, seguros = 0;
float porcNinos, porcJovenes, porcAdultos, porcSeguros;

printf("Ingrese la cantidad de pacientes hospitalizados: ");
scanf("%d", &n);

for (i = 0; i < n; i++) {
    printf("\nIngrese el nombre del paciente: ");
    scanf("%s", pacientes[i].nombre);
    printf("Ingrese la edad del paciente: ");
    scanf("%d", &pacientes[i].edad);
    printf("Ingrese el genero del paciente (M/F): ");
    scanf(" %c", &pacientes[i].genero);
    printf("Tiene seguro medico? (Si/No): ");
    scanf("%s", pacientes[i].seguro);

    if (pacientes[i].genero == 'F') {
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
for (i = 0; i < n; i++) {
    printf("- %s\n", pacientes[i].nombre);
}
porcNinos = (float)ninos / totalPacientes * 100;
porcJovenes = (float)jovenes / totalPacientes * 100;
porcAdultos = (float)adultos / totalPacientes * 100;

printf("\nPorcentaje de pacientes hospitalizados:\n");
printf("- Ninos hasta 13 anos: %.2f%%\n", porcNinos);
printf("- Jovenes mayores de 13 y menores de 30 anos: %.2f%%\n", porcJovenes);
printf("- Adultos mayores de 30 anos: %.2f%%\n", porcAdultos);

// Cantidad de mujeres y hombres hospitalizados
printf("\nCantidad de mujeres y hombres hospitalizados:\n");
printf("- Mujeres: %d\n", mujeres);
printf("- Hombres: %d\n", hombres);

int count_seguro = 0;
for (int i = 0; i < 100; i++) {
    if (pacientes[i].tiene_seguro) {
        count_seguro++;
    }
}
float porcentaje_seguro = (float)count_seguro / 100 * 100;
printf("Porcentaje de pacientes con seguro médico: %.2f%%\n", porcentaje_seguro);
return 0;
}