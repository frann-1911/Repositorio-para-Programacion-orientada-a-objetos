#include <stdio.h>

int main ()
{
	int filas;
	int columnas;
	printf("Ingrese la cantidad de filas que desea\n");
	scanf("%d", &filas);
 	printf("Ingrese la cantidad de columnas que desea \n");
	scanf("%d", &columnas);
 	int matriz[filas][columnas];
 	printf("ingrese numeros para rellenar la matriz: ");
 
 
 	for(int i = 0; i < filas; i++)
      { // acepta los numeros para rellenar la matriz
         for(int j = 0; j < columnas; j++) {
                 printf("Ingrese A[%d][%d]: ",i,j);
                 scanf("%d", &matriz[i][j]);
                 }
         
         }
  	for(int i = 0; i < filas; i++) 
      { // Muestra los numeros en pantalla
          printf("\n");
         for(int j = 0; j < columnas; j++) {
                 printf("%d\t",matriz[i][j]);
                 }
         
         }

printf("\n");
}
