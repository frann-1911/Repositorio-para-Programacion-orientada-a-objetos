 #include <stdio.h>
 

int main (int argc, char * argv[]){
int decision;
int CantidadDeAlumnos;
int PrecioAPagar;

float SueldoBase;
float venta1;
float venta2;
float venta3;
float SumaDeVentas;
float SueldoACobrar;

float Parcial1;
float Parcial2;
float Parcial3;
float parciales;
float Examenfinal;
float TrabajoFinal;
float NotaFinal;



  printf("A que ejercicio queres acceder?? \n");
        printf("1: Calcular el precio del micro\n");
        printf("2: Calcular sueldo final \n");
        printf("3: Calcilar calificacion final de la materia algoritmos\n");
        printf("4:\n");
        printf("5:\n");
        scanf("%d", &decision);



    switch (decision){
    case 1: 
    printf("cuantos alumos participaran del viaje de estudios??\n");
    scanf("%d", &CantidadDeAlumnos);
    if (CantidadDeAlumnos >= 100)
    {
        PrecioAPagar = 500 * CantidadDeAlumnos;
    }
    else if(CantidadDeAlumnos <= 99 && CantidadDeAlumnos >= 50){
        PrecioAPagar = 400 * CantidadDeAlumnos;
    }
    else if (CantidadDeAlumnos <= 49 && CantidadDeAlumnos >= 40)
    {
        PrecioAPagar = 300 * CantidadDeAlumnos;

    }
    else{
        PrecioAPagar = 6000;
    }
    printf("El precio a pagar en total por el micro es %d\n", PrecioAPagar);
    break;
    case 2:
 printf("ingese su sueldo base (sin comisiones)\n");
    scanf("%f", &SueldoBase);
    printf("\n");
    printf("ahora ingrese el valor de su primer venta\n");
    scanf("%f", &venta1);
    printf("\n");
    printf("ahora ingrese el valor de su segunda venta\n");
    scanf("%f", &venta2);
    printf("\n");
    printf("ahora ingrese el valor de su tercer venta\n");
    scanf("%f", &venta3);
    printf("\n");
    SumaDeVentas = venta1 + venta2 + venta3;
    SueldoACobrar = SueldoBase + (SumaDeVentas * 0.10);
    printf("su sueldo total a cobrar es $%f", SueldoACobrar);
    break;


    case 3:
    printf("\n");
    printf ("ingrese la nota de su primer parcial \n");
    scanf("%f", &Parcial1);
    if (Parcial1 > 10)
    {
        printf("no mientas, no te sacaste mas de un 10");
    }
    
    printf("\n");
    printf ("ingrese la nota de su segundo parcial \n");
    scanf("%f", &Parcial2);
      if (Parcial2 > 10)
    {
        printf("no mientas, no te sacaste mas de un 10");
    }
    printf("\n");
    printf ("ingrese la nota de su tercer parcial \n");
    scanf("%f", &Parcial3);
      if (Parcial3 > 10)
    {
        printf("no mientas, no te sacaste mas de un 10");
    }
    printf("\n");
    printf("\n");
    printf("ahora ingrese la calificacion de su examen final\n");
    scanf("%f", &Examenfinal);
      if (Examenfinal > 10)
    {
        printf("no mientas, no te sacaste mas de un 10");
    }
    printf("\n");
    printf("ahora ingrese la calificacion de su trabajo final\n");
    scanf("%f", &TrabajoFinal);
      if (TrabajoFinal > 10)
    {
        printf("no mientas, no te sacaste mas de un 10");
    }

    parciales = (Parcial1 + Parcial2 + Parcial3) / 3;
    NotaFinal = (parciales * 0.55) + (Examenfinal * 0.30)+ (TrabajoFinal * 0.15);
    if (NotaFinal > 10)
    {
        printf("usted ingreso algun dato mal");
    }
    
    printf("la nota final de la materia sera %f", NotaFinal);

    break;
   

    }

}