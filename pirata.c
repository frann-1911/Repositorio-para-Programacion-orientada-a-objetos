#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//genero una funcion para inicializar el tablero 
void tablero(){

	int num;
	printf("Escribi el numero del tamanio que vas a querer el tablero\n");
    scanf("%d",&num); //le pido al usuario el tamaño del tablero xd
	//genero un array y lo declaro como un array de chars para poder ingresar caracteres 
    char *tabla[num][num];
	//Declaro las variables necesarias
    int pirataf;
    int piratac;
    int tesorof;
    int tesoroc;
    int decision;
	//genero un for para asignar los casilleros con sus valores(agua, puente y espacio)
    for(int i = 0; i < num;i++){
    	for(int j = 0; j < num;j++){
    		if(i == 0 && j == num - 1 || i == num - 1 && j == 0){
    		tabla[i][j] = "\033[0;31m|B|\033[0m";	
			}else if(i == 0 || i == num - 1 || j == 0 || j == num - 1){
    		tabla[i][j] = "\033[0;34m|A|\033[0m";	
			}else{
    		tabla[i][j] = "\033[1;33m|-|\033[0m";
			}
		}
	}

	do{
	//Le asigno un valor random al pirata y al tesoro que no se salga del tablero 
    pirataf = (rand() % (num - 2)) + 1;
    piratac = (rand() % (num - 2)) + 1;
    tesorof = (rand() % (num - 2)) + 1;
	tesoroc = (rand() % (num - 2)) + 1;	
	} while(pirataf == tesorof && piratac == tesoroc);
	tabla[pirataf][piratac] = "|P|";
	//le pregunto al jugador que juego quiere jugar
	printf("Que desea jugar??\n");
	printf("Busca el tesoro 1 \n");
	printf("Mover al pirata 2 \n");
	scanf("%d", &decision);	
	switch(decision){
		case 1:
			buscar(num, tabla, piratac, pirataf, tesoroc, tesorof);
			break;
			
		case 2:
				moverse(num, tabla, piratac, pirataf, tesoroc, tesorof);
			break;
	}
	//hago un switch con las 2 posibles elecciones
	

}
//declaro una funcion para imprimir el tablero 
void imprimir(int num,char *tabla[num][num]){
for(int i = 0; i < num;i++){
	for(int j = 0; j < num;j++){
		printf("%s",tabla[i][j]);
	}
	printf("\n");
}	
}
//declaro una funcion para el juego de buscar el tesoro 
void buscar(int num, char *tabla[num][num], int piratac, int pirataf, int tesoroc, int tesorof) {
	int encontrado = 0;
	for(int var = 0; var <= 50 && encontrado == 0; var++ ) {
	imprimir(num,tabla);
	//printf("la posicion  es %d %d\n", tesorof + 1, tesoroc + 1); esta linea era para saber cuando lo programabamos, donde 
	printf("El pirata esta en la fila %d columna %d\n", pirataf, piratac);
	tabla[pirataf][piratac] = "|-|";
	printf("Elija la fila en la que quiere posicionarse: \n");
	scanf("%d",&pirataf);
	printf("Elija la columna en la que quiere posicionarse: \n");
	scanf("%d",&piratac);
	tabla[pirataf][piratac] = "|P|";
		if(piratac - 1 == tesoroc && pirataf - 1 == tesorof) {
			printf("GANASTE\n");
			tabla[tesorof][tesoroc] = "|T|";
			imprimir(num, tabla);
			encontrado = 1;
		}
    }
}
//declaro una funcion para el juego de moverse hasta encontrar el tesoro
void moverse(int num, char *tabla[num][num], int piratac, int pirataf, int tesoroc, int tesorof){
	int encontrado = 0;
	char movimiento;
	for(int var = 0; var <= 50 && encontrado == 0; var++ ) {
	imprimir(num,tabla);
	printf("Elegi entre Norte, Sur, Este u Oeste escribiendo la inicial\n");
	printf("%d %d\n", tesorof + 1, tesoroc + 1);
	scanf(" %c",&movimiento);
	if(movimiento == 'N' || movimiento == 'n'){
		tabla[pirataf][piratac] = "\033[1;33m|-|\033[0m";
		pirataf--;
	}else if(movimiento == 'S' || movimiento == 's'){
		tabla[pirataf][piratac] = "\033[1;33m|-|\033[0m";
		pirataf++;
	}else if(movimiento == 'O' || movimiento == 'o'){
		tabla[pirataf][piratac] = "\033[1;33m|-|\033[0m";
		piratac--;
	}else if(movimiento == 'E' || movimiento == 'e'){
		tabla[pirataf][piratac] = "\033[1;33m|-|\033[0m";	
		piratac++;
	}
	tabla[pirataf][piratac] = "|P|";
	if(piratac - 1 == tesoroc && pirataf - 1 == tesorof) {
			printf("GANASTE\n");
			tabla[tesorof][tesoroc] = "|T|";
			imprimir(num, tabla);
			encontrado = 1;
		}
	else if(pirataf == 0 || pirataf == num - 1 || piratac == 0 || piratac == num - 1) {
			printf("te caiste ugu\n");
			encontrado = 1;
		}

	
}
}



//Funcion Main
int main(int argc, char *argv[]) {
	srand(time(NULL));
	tablero();
	return 0;
}
