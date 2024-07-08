#include <stdio.h>
#include <time.h>

void generarMatriz(int *matriz[10][6]){
    for(int i=0; i < 10; i++){
        for(int j = 0; j<6; j++){
            printf("Ingrese los datos para la posicion [%d][%d]", i, j);
            scanf("%d", &matriz[i][j]);
            continue;
        }
    }


}
void ImprimirMatriz(int *matriz[10][6]){
for(int i=0; i < 10; i++){
        for(int j = 0; j<6; j++){
           printf("%d", matriz[i][j]);

        }
    }

}

void ejercicio1(){
    int opcion = 0;
    int filas = 10;
    int columnas = 6;
    int matriz[10][6];
    do{
printf("bienvenido al ejercicio 1\n");
printf("---MENU---\n");
printf("1-generar matriz\n");
printf("2-Imprimir matriz\n");
printf("3-Salir\n");
scanf("%d", &opcion);
switch(opcion){
    case 1:
    generarMatriz(matriz[10][6]);
    continue;
    case 2:
    ImprimirMatriz(matriz[10][6]);
    break;
    case 3:
    printf("Chau");
    break;
}
    } while(opcion != 0 && opcion!= 1 && opcion !=2 && opcion != 3);


}

int main(){
int decision;
do{
printf("\033 a que ejercicio quiere acceder???[;\031m\n");
printf("1- Ejercicio 1\n");
printf("2- Ejercicio 2\n");
printf("3- Ejercicio 3\n");
printf("4- Salir del programa\n");
scanf("%d", &decision);
switch(decision){
case 1:
ejercicio1();
break;
case 2:
//ejercicio2();
break;
case 3:
//ejercicio3();
break;
case 4:
printf("Hasta luego usuario\n");
break;
default: 
printf("ejercicio invalido\n");
break;
}}while(decision != 4 && decision != 1 && decision != 2 && decision != 3);




}