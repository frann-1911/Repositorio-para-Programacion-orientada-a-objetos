package cuatroDeSeptiembre;

import java.util.Scanner;
import java.util.Random;

public class CuatroDeSeptiembre {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
	       System.out.println("Elija un ejercicio 1-5");
	       int eleccion;
	       eleccion = leer.nextInt();
	       switch(eleccion) {
	       case 1:
	    	   ejercicio1();
	    	break;
	       case 2:
	    	   ejercicio2();
	    	   break;
	       case 3:
	    	   ejercicio3y4();
	    	   break;
	       case 4:
	    	   ejercicio5();
	    	   break;
	       case 5:
	    	   ejercicio6();
	    	   break;
	       default:
	           System.out.println("Opción no válida.");
	           break;
	       }
	       leer.close();
		
		
	}
	public static void ejercicio1() {
		double numero1=45;
		double numero2=32;
		double suma = numero1 + numero2;
		double resta= numero1 -numero2;
		double producto = numero1*numero2;
		double division = numero1/numero2;
		double modulo = numero1 % numero2;
		System.out.println("Numero uno: "+ numero1+ " Numero dos:"+ numero2);
		System.out.println("A continuacion se mostraran las distintas operaciones.");
		System.out.println("suma "+ suma);
		System.out.println("resta "+ resta);
		System.out.println("producto "+ producto);
		System.out.println("division "+ division);
		System.out.println("modulo "+ modulo);
	}
	public static void ejercicio2() {
		int jano;
		int num2;
		jano =(int) (Math.random() * 100) + 1;
		num2 =(int) (Math.random() * 100) + 1;
		System.out.println("El primer numero generado al azar es "+ jano);
		System.out.println("El segundo numero generado al azar es "+ num2);
		if(jano>num2) {
			System.out.println("El numero mas grande es " +jano);
		} 
		else if(num2>jano) {
			System.out.println("El numero mas grande es " +num2);

		}
		else {
			System.out.println("los numeros" + jano + num2+ "son iguales");

		}
		
	}
	public static void ejercicio3y4() {
		Scanner leer = new Scanner(System.in);

	String nombre;	
	System.out.println("ingrese su nombre");
	nombre = leer.nextLine();
	System.out.println("Hola "+ nombre + " Usted es un pelotudo/a");

		
    leer.close();
	}
	public static void ejercicio5() {
		final double pi = 3.14159265358979323846;
		System.out.println("ingrese el radio del circulo en cm");
		Scanner leer = new Scanner(System.in);
		double radio = leer.nextDouble();
		double area = pi*(radio*radio);
	    leer.close();
		System.out.println("El area del circulo es "+ area+ " cm2");

	}
	public static void ejercicio6() {
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese un numero para determinar si es divisible por 2");
		int num = leer.nextInt();
		if(num % 2 == 0) {
			System.out.println("El numero ingresado (" + num+ ") es divisible por 2");
		}
		else {
			System.out.println("El numero ingresado (" + num+ ") no es divisible por 2");
		}
		
		leer.close();
	}
		
	
}
