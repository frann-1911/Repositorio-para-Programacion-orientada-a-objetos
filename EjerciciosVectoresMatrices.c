#include <stdio.h>

void ej1(){
float num[3];
float media;
printf("ingrese 4 numeros, separados por espacios, para sacar una media aritmetica\n");
scanf("%f %f %f %f", &num[3], &num[2], &num[1], &num[0]);
media = (num[3] + num [2] + num[1] + num[0]) / 4;
printf("la media aritmetica es %.2f\n", media);
}

void ej2(){
int numeros[4];
printf("Ingrese 5 numeros separados por espacios \n");
scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
for(int i = 4; i>=0; i--){
    printf("%d ", numeros[i]);
}
}

void ej3(){
	int num;
	int seguir = 1;
	char *meses[] = {"Enero tiene 31 dias", "Febrero tiene 28 dias", "Marzo tiene 31 dias", "Abril tiene 30 dias", "Mayo tiene 31 dias", "Junio tiene 30 dias", "Julio tiene 31 dias", "Agosto tiene 31 dias", "Septiembre tiene 30 dias", "Octubre tiene 31 dias", "Noviembre tiene 30 dias", "Diciembre tiene 31 dias"};
	do{
		printf("Elija un numero para consultar cuantos dias tiene ese mes\n");
		scanf("%d", &num);
		printf("%s\n", meses[num-1]);
		printf("\n");
		printf("Desea seguir?\n Pulse 1 para la opcion:  si\n Pulse 2 para la opcion:  no\n");
		scanf("%d", &seguir);
 }
	while(seguir != 2);
}

void ej4(){
	
}
void ej5(){
	
}
void ej6(){
	int numeros[9];
	printf("Ingrese 10 numeros separados por espacios \n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4],&numeros[5],&numeros[6],&numeros[7],&numeros[8],&numeros[9]);
	for(int i = 9; i >= 0; i--){
		printf("%d ", numeros[i]);
	}
}

int main(){
int decision;
printf("Elija el ejercicio al que quiere acceder\n");
scanf("%d", &decision);
switch(decision){
    case 1:
    	ej1();
    break;
    case 2:
    	ej2();
    break;
    case 3:
    	ej3();
	break;
	case 4:
	break;
	case 5:
	break;
	case 6:
		ej6();
	break;
	
}


}
