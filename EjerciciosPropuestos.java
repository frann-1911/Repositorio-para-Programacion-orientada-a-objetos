package cuatroDeSeptiembre;


import java.util.Scanner;
import java.util.Random;

public class Masejercicios {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
	       System.out.println("Elija un ejercicio 7-11");
	       int eleccion;
	       eleccion = leer.nextInt();
	       switch(eleccion) {
	       case 7:
	    	   ejercicio7();
	    	break;
	       case 8:
	    	   ejercicio8();
	    	   break;
	       case 9:
	    	   ejercicio9();
	    	   break;
	       case 10:
	    	   ejercicio10();
	    	   break;
	       case 11:
	    	   ejercicio11();
	    	   break;
	       default:
	           System.out.println("Opción no válida.");
	           break;
	       }
	       leer.close();
		
		
	}
	public static void ejercicio7() { 
		System.out.println("ingrese un valor numerico");
		Scanner leer = new Scanner(System.in);
		int num = leer.nextInt();
		char jano = (char) num;
		leer.close();
		System.out.println("El valor ingresado corresponde a    " + jano + "    en la tabla ascii");
		
	}public static void ejercicio8() { 
		System.out.println("ingrese un caracter");
		Scanner leer = new Scanner(System.in);
		char caracter = leer.next().charAt(0);
		int representacion = (int) caracter;
		System.out.println("El valor ASCII es: " + representacion);
		leer.close();

	}public static void ejercicio9() { 
		System.out.println("ingrese un precio");
		Scanner leer= new Scanner(System.in);
		double precio = leer.nextDouble();
		final double iva = 1.21;
		double precioFinal = precio * iva;
		System.out.println("El precio ingresado es "+ precio);
		System.out.println("El precio con el iva agregado es es "+ precioFinal);

		leer.close();
	}public static void ejercicio10() { 
		int i = 1;
		while(i<=100) {
			System.out.println(i);
			i++;
		}
		
		
	}public static void ejercicio11() { 
		for(int i = 1; i<=100; i++) {
			System.out.println(i);

		}
	}
}
