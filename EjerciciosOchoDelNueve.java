package Ejercicios12EnAdelante;

import java.util.Scanner;
import java.util.Random;

public class EjerciciosOchoDelNueve {
	public static void main(String[] args) {
		
	
	Scanner leer = new Scanner(System.in);
	System.out.println("Elija un ejercicio 12-17");
    int eleccion;
    eleccion = leer.nextInt();
    switch(eleccion) {
    case 12:
 	   ejercicio12();
 	break;
    case 13:
 	   ejercicio13();
 	   break;
    case 14:
 	   ejercicio14();
 	   break;
    case 15:
 	   ejercicio15();
 	   break;
    case 16:
 	   ejercicio16();
 	   break;
    case 17:
    	ejercicio17();
    	break;
    default:
        System.out.println("Opcion no valida.");
        break;
    }
    leer.close();
	}
public static void ejercicio12() { 

	for(int i = 0; i<=100; i++) {
		if(i%2==0 && i%3==0) {
			System.out.println(i +" es divisible por 2 y por 3");
		}
	}
	
	
}
public static void ejercicio13() { 
	System.out.println("Cuantas ventas se realizaron?");
	Scanner leer = new Scanner(System.in);
	int ventas = leer.nextInt();
	double total = 0;
	System.out.println("ingrese los valores de las "+ventas+" Ventas");
	for(int i=0;i<ventas;i++) {
		total += leer.nextDouble();
	}
	System.out.println("El valor total de todas las ventas es de "+ total);
	
	leer.close();
	

}
public static void ejercicio14() { 
System.out.println("El programador no recordaba los conocimientos necesarios en matematica para este ejercicio y decidio");
System.out.println("que no valia la pena ponerse a buscar formulas matematicas en vez de codigo");

}
public static void ejercicio15() { 
	int num;
	Scanner leido = new Scanner(System.in);
	do {
		System.out.println("Ingresa un numero igual o mayor que 0, de lo contrario el programa finalizara");
		num=leido.nextInt();

	}while(num>= 0);
		leido.close();
	}
public static void ejercicio16() { 

	
	String clave = "jano";
	Scanner leer = new Scanner (System.in);
	int nIntento = 1;
	System.out.println("Ingrese la clave ");

	while(nIntento <= 3) {
		String intento = leer.next();
	if(intento.equals(clave)) {
		System.out.println("Excelente, la clave era jano JAJAJ");
	}
	else {
		System.out.println("Esa no es la clave, intento "+ nIntento+ "/3");
		
	}
	System.out.println("Ingrese la clave ");
	nIntento++;
	}
	System.out.println("Adios");
	
	leer.close();
	
	
}

public static void ejercicio17() { 
	System.out.println("Introduce un dia de la semana:");
	Scanner leer=new Scanner(System.in);

	String dia = leer.next();
switch(dia){
case "lunes":
case "martes":
case "miercoles":
case "jueves":
case "viernes":
    System.out.println("Es un dia laboral");
    break;
case "sabado":
case "domingo":
    System.out.println("Es un dia no laborable");
    break;
case "rita":
    System.out.println("Hola profe, muchas gracias por corregir, de esa manera siento que hacer los ejercicios no es en vano :)");
    break;
default:
    System.out.println("Introduce un dia de la semana");

}
leer.close();
}


}