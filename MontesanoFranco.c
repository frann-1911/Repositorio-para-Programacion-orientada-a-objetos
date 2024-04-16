#include <stdio.h>
//use gdb compiler 
// Aprobame profe <3

int main(int argc, char *argv[]){
    //declaro una variable para elegir a que ejercicio acceder
int ejercicio;

// variables del ejercicio 1 :)
float kilosVendidos;
int TipoUva;
int TamanioUva;
float PrecioFinal;

// variables del ejercicio 2 :)
int base;
int potencia;
int resultado;
int temporal = 0;

// variables del ejercicio 3 :)
float radio;
float pi=3.141592;
float longitudCirc;
float areaCirc;
float volumenEsf;

// variables del ejercicio 4 :)
int genero;
int edad;
int AniosAportes;

// variables del ejercicio 5 :)
int cantidadHijos;
int pago;
int cantidadEscolar;


printf("ingrese el numero de ejercicio al que quiere acceder\n");
printf("1- Ejercicio 1\n");
printf("2- Ejercicio 2\n");
printf("3- Ejercicio 3\n");
printf("3- Ejercicio 4\n");
printf("3- Ejercicio 5\n");
scanf("%d", &ejercicio);

switch(ejercicio){
    //ejercicio 1
    case 1:
    printf("ingrese la cantidad de kilos venidos\n");
    scanf("%f", &kilosVendidos);
    printf("ingrese el tipo de uva\n");
    printf("1 Uva tipo A\n");
    printf("2 Uva tipo B\n");
    scanf("%d", &TipoUva);

    //Le pido al usuario que ingrese el tipo y tamaño de la uva
    if(TipoUva == 1){
        printf("ingrese el tamaño de la uva\n");
        printf("1- tamaño 1 \n");
        printf("2- tamaño 2 \n");
        scanf("%d", &TamanioUva);
        if(TamanioUva == 1){
            PrecioFinal = 200 * kilosVendidos;
            printf("su venta fue de %f \n", PrecioFinal);
        }
           if(TamanioUva == 2){
            PrecioFinal = 300 * kilosVendidos;
            printf("su venta fue de %f \n", PrecioFinal);
        }
    }
    else if(TipoUva == 2){
         printf("ingrese el tamaño de la uva\n");
        printf("1- tamaño 1 \n");
        printf("2- tamaño 2 \n");
        scanf("%d", &TamanioUva);
        if(TamanioUva == 1){
            PrecioFinal = 300 * kilosVendidos;
            printf("su venta fue de %f \n", PrecioFinal);
        }
           if(TamanioUva == 2){
            PrecioFinal = 500 * kilosVendidos;
            printf("su venta fue de %f \n", PrecioFinal);
        }
    }
    break;
    //ejercicio 2
    case 2:
    printf("ingrese 2 numeros, el primero sera la base y el segundo sera la potencia\n");
    scanf("%d %d",  &base, &potencia);
    if(base > 0 && base / 1 == base && potencia > 0 && potencia / 1 == potencia){
     for (int i = 0; i < potencia; i++)
     {        
        resultado = base * base;

     }

     
        printf("El resultado es %d", resultado);
    }
    else{
        printf(" ingrese los datos de vuelta, ya que uno de los numeros es negativo o no es un entero");
    }
    break;

//ejercicio 3
    case 3:
printf("ingrese el radio para realizar los calculos\n");
scanf("%f", &radio);
longitudCirc = 2*pi*radio;
areaCirc = pi*(radio * radio);
volumenEsf = 4/3*pi*(radio*radio*radio);
printf("la longitud de la circumferencia es %.2f \n", longitudCirc);
printf("el area de la circumferencia es %.2f \n", areaCirc);
printf("el volumen de la circumferencia es %.2f \n", volumenEsf);
    break;

    case 4:
    printf("ingrese su genero \n");
    printf("1 hombre\n");
    printf("2 mujer \n");
    scanf("%d", &genero);
    printf("ingrese su edad \n");
    scanf("%d", &edad);
    printf("ingrese sus años de aportes\n");
    scanf("%d", &AniosAportes);
    if (genero == 1)
    {
        if(edad >= 65){
            if (AniosAportes >= 20)
            {
                printf("Usted se puede jubilar \n");
        
            }
            else{
                printf("Usted no se puede jubilar \n");
                
            }
            
        }
        else{
            printf("no cumple con la edad necesaria \n");
        }
    }
    if (genero ==2)
    {
    if (edad >= 60)
    {
  if (AniosAportes >= 20)
            {
                printf("Usted se puede jubilar \n");
        
            }
            else{
                printf("Usted no se puede jubilar \n");
                
            }    }
              else{
            printf("no cumple con la edad necesaria \n");
        }
            }
             break;

    case 5:
    printf("ingrese la cantidad de hijos\n");
    scanf("%d", &cantidadHijos);
    printf("ingrese la cantidad de hijos en edad escolar (entre 6 y 18)\n");
    scanf("%d", &cantidadEscolar);
    if (cantidadHijos <= 2)
    {
        pago = cantidadHijos * 700;
        printf("usted recibira %d", pago+cantidadEscolar*1000);

    }
        if (cantidadHijos > 2 && cantidadHijos <= 5)
    {
        pago = cantidadHijos * 800;
        printf("usted recibira %d", pago+cantidadEscolar*1000);

    }
    else if(cantidadHijos>5){
         pago = cantidadHijos * 1200;
        printf("usted recibira %d", pago+cantidadEscolar*1000);
    }
    
    
    break;
    }}
    
      


    
