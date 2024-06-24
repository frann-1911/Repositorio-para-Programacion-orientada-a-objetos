#include <stdio.h>
//usé OnlineGDB
//No esta completo


void AsignarPremios(){
int premios[7];
//Le pido al usuario que ingrese los valores de los premios para cada juego
printf("Este programa decidira los ganadores de los premios. Por cada juego habrá un ganador.\n");
printf("ingrese el valor del premio del primer juego:\n");
scanf("%d", &premios[0]);
printf("ingrese el valor del premio del segundo juego:\n");
scanf("%d", &premios[1]);
printf("ingrese el valor del premio del tercer juego:\n");
scanf("%d", &premios[2]);
printf("ingrese el valor del premio del cuarto juego:\n");
scanf("%d", &premios[3]);
printf("ingrese el valor del premio del quinto juego:\n");
scanf("%d", &premios[4]);
printf("ingrese el valor del premio del sexto juego \n");
scanf("%d", &premios[5]);
printf("ingrese el valor del premio del septimo juego:\n");
scanf("%d", &premios[6]);
//guardo los premios en un array, de modo que la primera posicion del array es el 
//premio del primer juego y asi sucesivamente 

}


int main(){
AsignarPremios();
//le doy un maximo de 210 a los arrays porque 30 jugadores X 7 juegos es 210. Los jugadores solo podran obtener un

int numeroJugador[210];
int juego[210];
int puntuacion[210];
int decision;
int num;

printf("ingrese el numero de jugador, luego el numero de juego y por ultimo la puntuacion obtenida\n");
printf("cuando desee dejar de ingresar datos, coloque un 0 en el numero de jugador \n");

    do{
scanf("%d %d %d", &numeroJugador[num], &juego[num], &puntuacion[num]);
printf("desea ingresar otra terna?\n 0: no \t 1:si\n");
scanf("%d", &decision);
num ++;
    }
    while(decision != 0);

do

}


