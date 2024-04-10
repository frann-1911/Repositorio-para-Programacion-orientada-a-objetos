#include <stdio.h>

int main(int argc, char *argv[]){
    int decision;

    int numeroIngresar;

    float totalEstudiantes;
    float mujeres;
    float hombres;
    float porcentajeHombres;
    float porcentajeMujeres;

    float pesos;
    float dolares;
    float cotizacion;

    int genero;
    int peso;
    int edad;
    int frecuenciaCardiaca;


    printf("elija el ejercicio al que acceder\n");
    printf("1. Ejercicio 14\n");
    printf("2. Ejercicio 15\n");
    printf("3. Ejercicio 16\n");
    printf("4. Ejercicio 17\n");
    scanf("%d", &decision);
    switch (decision)
    {
    case 1:
    printf("ingrese un numero \n");
    scanf("%d", &numeroIngresar);
    if (numeroIngresar > 0)
    {
        printf("El numero absoluto es %d", numeroIngresar);
    }
    else{
        numeroIngresar = numeroIngresar * -1;
        printf("El numero absoluto es %d", numeroIngresar);
    }
        break;
    
    case 2:
    printf("ingrese el numero total de alumnos\n");
    scanf("%f", &totalEstudiantes);
    printf("ingrese el numero total de alumnos hombres \n");
    scanf("%f", &hombres);
    printf("ingrese el numero total de alumnas mujeres \n");
    scanf("%f", &mujeres);
    porcentajeHombres = (hombres / totalEstudiantes) * 100;
    porcentajeMujeres = (mujeres / totalEstudiantes) * 100;
    printf("el porcentaje de hombres es %f porciento\n", porcentajeHombres);
    printf("el porcentaje de mujeres es %f porciento\n", porcentajeMujeres);
    break;
    case 3:
    printf("ingrese la cantidad de pesos que quiere convertir a dolares\n");
    scanf("%f", &pesos);
    printf("ingrese la unidad cambiaria (cotizacion)\n");
    scanf("%f", &cotizacion);
    dolares = pesos / cotizacion;
    printf("%f pesos son %f dolares", pesos, dolares);
break;
case 4:
printf("ingrese su edad\n");
scanf("%d", &edad);
printf("ingrese su peso\n");
scanf("%d", &peso);
printf("Cual es su genero?\n");
printf("1. Hombre\n");
printf("2. Mujer\n");
scanf("%d", &genero);
switch (genero)
{
case 1:
    frecuenciaCardiaca = ((210- (0.5 * edad))- peso * 0.01) + 4;
    printf("la frecuencia cardiaca maxima es %d", frecuenciaCardiaca);
    break;
case 2:
    frecuenciaCardiaca =((210- (0.5 * edad))- peso * 0.01);
    printf("la frecuencia cardiaca maxima es %d", frecuenciaCardiaca);

}

break;

    }
}