#include <stdio.h>

void ej1(){
	/*Un programa que pida al usuario 4 números, los memorice (utilizando una tabla), calcule su media 
	aritmética y después muestre en pantalla la media y los datos tecleados.*/
float num[3];
float media;
printf("ingrese 4 numeros, separados por espacios, para sacar una media aritmetica\n");
scanf("%f %f %f %f", &num[3], &num[2], &num[1], &num[0]);
media = (num[3] + num [2] + num[1] + num[0]) / 4;
printf("la media aritmetica es %.2f\n", media);
}

void ej2(){
	/*Un programa que pida al usuario 5 números y luego los muestre en el orden contrario al que se introdujeron.*/
int numeros[4];
printf("Ingrese 5 numeros separados por espacios \n");
scanf("%d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4]);
for(int i = 4; i>=0; i--){
    printf("%d ", numeros[i]);
}
}

void ej3(){
	/*Un programa que almacene en una tabla el número de días que tiene cada mes (su­pon­dremos que es un año no bisiesto), pida al usuario que le indique un mes 
	(1=enero, 12=diciembre) y muestre en pantalla el número de días que tiene ese mes.*/
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
	/*Un programa que almacene en una tabla el número de días que tiene cada mes (año no bisiesto), pida al usuario que le indique un mes
	 (ej. 2 para febrero) y un día (ej. el día 15) y diga qué número de día es dentro del año (por ejemplo, el 15 de febrero sería el día número 46, 
	 el 31 de diciembre sería el día 365).*/
int anio[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int mes = 0;
int dia = 0;
int dia_del_anio = 0;
printf("Ingrese un mes utilizando el numero que le corresponde al mismo. Ejemplo Octubre = 10\n");
scanf("%d", &mes);
printf("Ingrese el dia del mes que eligio\n");
scanf("%d", &dia);
  for (int i = 0; i < mes - 1; i++) {
        dia_del_anio += anio[i];
    }
	    dia_del_anio += dia;

    printf("El dia %d del mes %d es el dia numero %d del anio.\n", dia, mes, dia_del_anio);

}
void ej5(){
/*A partir del programa que almacenaba en una tabla el número de días que tiene cada mes, crear otro que pida al usuario que le indique la fecha, 
detallando el día (1 al 31) y el mes (1=enero, 12=diciembre), como respuesta muestre en pantalla el número de días que quedan hasta final de año.*/
	int anio[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int mes = 0;
int dia = 0;
int dia_del_anio = 0;
printf("Ingrese un mes utilizando el numero que le corresponde al mismo. Ejemplo Octubre = 10\n");
scanf("%d", &mes);
printf("Ingrese el dia del mes que eligio\n");
scanf("%d", &dia);
  for (int i = 0; i < mes - 1; i++) {
        dia_del_anio += anio[i];
    }
	    dia_del_anio += dia;
  printf("El dia %d del mes %d quedaran %d dias para que termine el anio\n", dia, mes, 365-dia_del_anio);

}
void ej6(){
	/*Crear un programa que pida al usuario 10 números enteros y luego los muestre en orden inverso (del último al primero), usando "for".*/
	int numeros[9];
	printf("Ingrese 10 numeros separados por espacios \n");
	scanf("%d %d %d %d %d %d %d %d %d %d", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4],&numeros[5],&numeros[6],&numeros[7],&numeros[8],&numeros[9]);
	for(int i = 9; i >= 0; i--){
		printf("%d ", numeros[i]);
	}
}
void ej7(){
/*Crear un programa que pida al usuario 10 números reales, calcule su media y luego muestre los que están por encima de la media.*/
float numeros[10];
float media = 0;
printf("ingrese 10 numeros reales , es decir pueden contener decimales y ser negativos, separados por espacios\n");
scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);
media = (numeros[0] +  numeros[1] + numeros[2] + numeros[3] + numeros[4] + numeros[5] + numeros[6] + numeros[7] + numeros[8] + numeros[9])/10;
printf("Los numeros mayores a la media son\n");

for (int i = 0; i < 10; i++)
{
	if (numeros[i] > media)
	{
		printf("\033[0;34m%.2f\033[0m\t", numeros[i]);
	
	}
	
}
}
void ej8(){
	/*Un programa que pida al usuario 10 números enteros y calcule (y muestre) cuál es el mayor de ellos.*/
	float numeros[10];
	float maximo;
printf("ingrese 10 numeros\n");
scanf("%f %f %f %f %f %f %f %f %f %f", &numeros[0], &numeros[1], &numeros[2], &numeros[3], &numeros[4], &numeros[5], &numeros[6], &numeros[7], &numeros[8], &numeros[9]);
maximo = numeros[0];
  for (int i = 1; i < 10; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }
    printf("El numero mayor es: %.2f\n", maximo);

}

void ej9(){
	/*Un programa que pida al usuario los datos de dos vectores en el plano (2 coordenadas) y calcule su diferencia.*/
int vector1[2];
int vector2[2];
printf("ingrese las coordenadas del primer vector \n");
scanf("%d %d",  &vector1[0], &vector1[1]);
printf("ingrese las coordenadas del segundo vector \n");
scanf("%d %d", &vector2[0], &vector2[1]);
int vector3[2] = {(vector1[0]-vector2[0]), (vector1[1]-vector2[1])};
printf("el nuevo vector es:\n");
for (int i = 0; i < 2; i++)
{
	printf("%d ", vector3[i]);
}
}

void ej10(){
	/*Un programa que pida al usuario las componentes de dos vectores en el espacio (3 coordenadas) y calcule su producto escalar. 
	Investigar cómo se realizan los cálculos matemáticos sobre vectores.*/
	float vector1[3];
	float vector2[3];
	float escalar;
	printf("Para sacar el valor del producto escalar se necesitan 2 vectores\n");
	printf("ingrese los valores del primer vector\n");
	scanf("%f %f %f", &vector1[0], &vector1[1], &vector1[2]);
	printf("ingrese los valores del segundo vector\n");
	scanf("%f %f %f", &vector2[0], &vector2[1], &vector2[2]);
	escalar = vector1[0] * vector2[0] + vector1[1] * vector2[1] + vector1[2] * vector2[2];
	printf("el producto escalar es %.1f", escalar);

}
void ej11(){
/*Un programa que pida al usuario las componentes de dos vectores en el espacio y calcule su producto vectorial. Investigar cómo se realizan los cálculos matemáticos sobre vectores.*/
float vector1[3];
float vector2[3];
float vectorRes[3];
	printf("Para sacar el valor del producto vectorial se necesitan 2 vectores, recuerde que el orden en el que ingrese los vectores modifica el resultado\n");
	printf("ingrese los valores del primer vector\n");
	scanf("%f %f %f", &vector1[0], &vector1[1], &vector1[2]);
	printf("ingrese los valores del segundo vector\n");
	scanf("%f %f %f", &vector2[0], &vector2[1], &vector2[2]);
	vectorRes[0] = vector1[1] * vector2[2] - vector1[2] * vector2[1];
	vectorRes[1] = vector1[0] * vector2[2] - vector1[2] * vector2[0];
	vectorRes[2]= vector1[0] * vector2[1] - vector1[1] * vector2[0];
	printf("el resultado es: \n");
	printf("%.1f I %.1f J %.1f K", vectorRes[0], vectorRes[1] * -1, vectorRes[2]);
}

void ej12(){
/*Un programa que pida al usuario dos vectores en el plano (2 coordenadas) y diga si son linealmente dependientes (sus componentes son proporcionales). 
Investigar cómo se realizan los cálculos matemáticos sobre vectores.*/
float vector1[2]; 
float vector2[3];
	printf("Para saber si dos vectores son linealmente dependientes se necesitan 2 vectores\n");
	printf("ingrese los valores del primer vector\n");
	scanf("%f %f", &vector1[0], &vector1[1]);
	printf("ingrese los valores del segundo vector\n");
	scanf("%f %f", &vector2[0], &vector2[1]);

if (vector1[1] / vector2[1] == vector1[0] / vector2[0])
{
	printf("Los dos vectores son linealmente dependientes\n");
}
else{
	printf("Los dos vectores NO son linealmente dependientes\n");

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
	ej4();
	break;
	case 5:
	ej5();
	break;
	case 6:
		ej6();
	break;
	case 7:
	ej7();
	break;
	case 8:
	ej8();
	break;
	case 9:
	ej9();
	break;
	case 10:
	ej10();
	break;
	case 11:
	ej11();
	break;
	case 12: 
	ej12();
	break;

	
	
}


}
