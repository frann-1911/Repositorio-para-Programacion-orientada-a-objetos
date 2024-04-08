#include <stdio.h>

int main(int argc, char * argv[]){
int decision;

int numuno;
int numdos;
int numtres;

float num1;
float num2;
float num3;
float promedio;

int numeroingresado;

int prueba1;
int prueba2;
int prueba3;
int prueba4;
int NotaTarea;
int promedio2;

int notaPrueba;

printf("A que ejercicio queres acceder?\n");
printf("1: suma de tres numeros consecutivos\n");
printf("2: calcular el promedio de tres numeros\n");
printf("3: averiguar si es par o impar\n");
printf("4: Calcular si aprobo\n");
printf("5: ingrese la nota de su evaluacion\n");
scanf("%d", &decision);

switch (decision)
{
case 1:

    numuno = (87/3) - 1;
    numdos=(87/3) + 1;
    numtres = (87/3);
    printf("%d + %d + %d =87\n", numuno, numdos, numtres );
    break;

    case 2:
    printf("ingrese tres numeros enteros para sacar un promedio\n");
    scanf("%f %f %f", &num1, &num2, &num3);
    promedio =  (num1 + num2 + num3) / 3;
    printf("el promedio es %.2f \n", promedio);
    break;

    case 3:
    printf("ingrese un valor numerico positivo mayor que cero\n");
    scanf("%d", &numeroingresado);
    if (numeroingresado % 2 == 0)
    {
        printf("es par\n");
    }
    else{
        printf("es impar\n");
    }
    
    break;
    case 4:
    printf("ingrese las notas de las 4 pruebas\n");
    scanf("%d %d %d %d", &prueba1, &prueba2, &prueba3, &prueba4 );
    printf("ingrese la nota de la tarea\n");
    scanf("%d", &NotaTarea);
    promedio = (prueba1+prueba2+prueba3+prueba4+NotaTarea) / 5;
    if (promedio >= 6)
    {
        printf("El alumno aprobó, su promedio es %d\n", promedio);
    }
    else{
        printf("el alumno no aprobó, su promedio es %f\n", promedio);
    }
    

    break;

    case 5:
    printf("ingese la nota de su evaluacion\n");
    scanf("%d", &notaPrueba);

    if(notaPrueba >= 6){
        printf("Aprobado \n");
    }
    else if (notaPrueba <= 6)
    {
        printf("Reprobado\n");
    }
    else if (notaPrueba <= 1){
        printf("debes esforzarte mas \n");
    }
    else if (notaPrueba >= 8);
    {
        printf("felicitaciones \n");
    }
    break;

    case 6:
}



}

