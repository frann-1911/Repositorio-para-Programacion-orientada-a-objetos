#include <stdio.h>

int main(int argc, char *argv[]){
int decision;

float capital;

int edadPadre = 50;
int edadHijo = 20;
int contador = 1;

int segundos; 
int minutos;
int horas;

int sueldoBase;
float venta1;
float venta2;
float venta3;
float sueldoTotal;

int compra;
float total;
printf("A que ejercicio desea acceder?\n");
printf("1. Ejercicio 8\n");
printf("2. Ejercicio 9\n");
printf("3. Ejercicio 10\n");
printf("el ejercicio 11 estaba en otro tp, ya lo hice\n");
printf("4. Ejercicio 12\n");
printf("5. Ejercicio 13\n");
scanf("%d", &decision);
switch (decision)
{
case 1:
printf("Cual fue el capital que ingreso al banco?\n");
scanf("%f", &capital);
capital = capital * 1.02;
printf("su capital el proximo mes sera $%.4f", capital);
    break;

case 2:
while (edadHijo != (edadPadre / 2))
{
contador ++;
edadHijo ++;
edadPadre ++;
}
printf("Dentro de %d anios la edad del padre sera el doble de la del hijo\n", contador);
break;

case 3:
printf("ingrese la cantidad de segundos a convertir en horas minutos y segundos \n");
scanf("%d", &segundos);
while (segundos >= 60)
{
if (segundos >= 60)
{
    minutos = minutos + 1;
    segundos = segundos - 60;
}
if (minutos >= 60)
{
    horas = horas +1;
    minutos = minutos - 60;
}}
printf("El tiempo sera %d H %d Min %d Seg", horas, minutos, segundos);
break;

case 4:
printf("ingrese su sueldo base \n");
scanf("%d", &sueldoBase);
printf("Ingrese sus 3 ventas separadas por espacios\n");
scanf("%f %f %f", &venta1, &venta2, &venta3);
sueldoTotal = sueldoBase + (0.10 * (venta1 + venta2 + venta3));
printf("su sueldo base es %d\t su sueldo final es %4.f", sueldoBase, sueldoTotal);
break;
case 5:
printf("ingrese el subtotal de su compra para aplicarle un descuento\n");
scanf("%d", &compra);
total = compra * 0.85;
printf("El total de su compra despues de impuestos sera %4.f", total);
break;


}




}