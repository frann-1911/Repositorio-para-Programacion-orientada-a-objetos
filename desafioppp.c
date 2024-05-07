#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h> 

int main() {
	//declaro la semilla del random para que se ajuste al tiempo y sea completamente aleatorio
    srand(time(NULL));
	//declaro las variables necesarias para el ejercicio
    char *ppp[] = {"piedra", "papel", "tijera"};
    int maquina;
    int eleccion;
    int rondaj = 0;
    int rondam = 0;
    int vueltaj = 0;
    int vueltam = 0;
    
    for(int i = 1; rondaj < 3 && rondam < 3; i++) {
        for(int j = 1; vueltaj < 2 && vueltam < 2; j++) {
			//declaro la eleccion de la maquina como random
            maquina = rand() % 3 + 1;
            printf("Que desea jugar?\n");
            printf("1-Piedra \t 2-Papel \t 3-Tijera\n");
            printf("\n");
            // Escaneo la entrada del usuario como string porque de lo contrario cuando se ingresen caracteres generara un error
            char entrada[10]; 
            scanf("%s", entrada);
			//comparo la entrada con los numeros que se piden. Despues utilizo atoi para asignarle el valor a eleccion como Int
            if (strcmp(entrada, "1") == 0 || strcmp(entrada, "2") == 0 || strcmp(entrada, "3") == 0) {
                eleccion = atoi(entrada); 
            } else { //Le explico al usuario que los datos no son correctos
                printf("Los datos ingresados no son validos, por favor revise su eleccion e ingrese el numero de nuevo\n");
                continue; 
            }
			//le explico al usuario lo que eligio la maquina y lo que eligio el
            printf("\n");
            printf("El jugador eligio %s\n", ppp[eleccion - 1]);
            printf("La maquina eligio %s\n", ppp[maquina - 1]);
            printf("\n");

            if ((eleccion == 1 && maquina == 3) || (eleccion == 2 && maquina == 1) || (eleccion == 3 && maquina == 2)) {   // El caso en el que gana el jugador 
                vueltaj++;
                printf("GANO EL JUGADOR LA VUELTA, VAN \n JUGADOR: %d MAQUINA: %d \n", vueltaj, vueltam);
            } else if ((maquina == 1 && eleccion == 3) || (maquina == 2 && eleccion == 1) || (maquina == 3 && eleccion == 2)) {        // El caso en el que gana la maquina 
                vueltam++;
                printf("GANO LA MAQUINA LA VUELTA, VAN \n JUGADOR: %d MAQUINA: %d \n", vueltaj, vueltam);
            } else if (maquina == eleccion) {     // El caso en el empatan
                j--;
                printf("HA SIDO EMPATE, VAN \n JUGADOR: %d MAQUINA: %d \n", vueltaj, vueltam);
            }
            printf("\n");
        }

        if (vueltaj > vueltam) {
            rondaj++;
            printf("GANO EL JUGADOR LA RONDA %d, VAN \n JUGADOR: %d MAQUINA: %d", rondaj + rondam, rondaj, rondam);
            printf("\n");
        } else {
            rondam++;
            printf("GANO LA MAQUINA LA RONDA %d, VAN \n JUGADOR: %d MAQUINA: %d", rondaj + rondam, rondaj, rondam);
            printf("\n");
        }
        vueltaj = 0;
        vueltam = 0;
    }
		//felicito al jugador por ganar la partida
    if (rondaj > rondam) {
        puts("GANO EL JUGADOR LA PARTIDA");
        puts("FELICITACIONES, AGUANTE TALLERES");
    } else { //Le digo al jugador que lamentablemente perdio
        puts("GANO LA MAQUINA LA PARTIDA");
        puts("MAL AHI");
    }

    return 0;
}
