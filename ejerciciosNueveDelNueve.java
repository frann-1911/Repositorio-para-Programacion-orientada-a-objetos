import java.util.Scanner;
import java.util.Random;

public class ejerciciosNueveDelNueve {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
		System.out.println("Elija un ejercicio 18-24");
	    int eleccion;
	    eleccion = leer.nextInt();
	    switch(eleccion) {
	    case 18:
	 	   ejercicio18();
	 	break;
	    case 19:
	 	   ejercicio19();
	 	   break;
	    case 20:
	 	   ejercicio20();
	 	   break;
	    case 21:
	 	   ejercicio21();
	 	   break;
	    case 22:
	 	   ejercicio22();
	 	   break;
	    case 23:
	    	ejercicio23();
	    	break;
	    case 24:
	    	ejercicio24();
	    	break;
	    	
	    default:
	        System.out.println("Opcion no valida.");
	        break;
	    }
	    leer.close();
	}
	public static void ejercicio18() {
		Scanner leer = new Scanner(System.in);
		System.out.println("Ingrese dos numeros para generar aleatorios entre ambos");
		int a = leer.nextInt();
		int b= leer.nextInt();
		for(int i = 0; i<= 10; i++) {
			int numero = (int)(Math.random()*(a-b+1)+b);
			System.out.println("El random es:"+ numero);
		}
		
	}
	public static void ejercicio19() {
		System.out.println("Ingrese un numero mayor a 0 y positivo");
		Scanner leer = new Scanner (System.in);
		int num = leer.nextInt();
		int cifras = 0;
		if(num>=0 && num % 1 == 0) {
			System.out.println("El numero ingresado es valido");
			while(num>0) {
				num = num / 10;
				cifras ++;
			}
			System.out.println("El numero tiene "+ cifras +" cifras");
		}
		else { 
			System.out.println("Escribi un numero que sea valido bobo");
			}
		
		leer.close();
	}
	public static void ejercicio20() {
	Scanner leer = new Scanner (System.in);
	System.out.println("Escriba un numero");

	int n = leer.nextInt();
		        if (n <= 1) {
		        	System.out.println("El numero es primo");
		        }

		        for (int i = 2; i <= Math.sqrt(n); i++) {
		            if (n % i == 0) {
			        	System.out.println("El numero no es primo");
			        	break;
		            }
			       else{
			        		System.out.println("El numero es primo");
			        		break;
			        		
		            }

	}
		      
		        
leer.close();
	}
	public static void ejercicio21() {

		   for (int i = 2; i <= 100; i++) {
		        boolean esPrimo = true;

		        for (int j = 2; j <= Math.sqrt(i); j++) {
		            if (i % j == 0) {
		                esPrimo = false;
		                break;
		            }
		        }

		        if (esPrimo) {
		            System.out.println(i);
		        }
		    }
		}
			        

	
	public static void ejercicio22() {
		String vocales = "La lluvia en Sevilla es una maravilla";
		int tamanio = vocales.length();
		int cantVocales = 0;
		for(int i = 0; i<tamanio; i++) {
		if(vocales.charAt(i)=='a'||vocales.charAt(i)=='e'||vocales.charAt(i)=='i'||vocales.charAt(i)=='o'||vocales.charAt(i)=='u') {
		cantVocales ++;	
		}
		
		}
		System.out.println("Hay "+cantVocales+ " Vocales");
		
				}
	public static void ejercicio23() {
		String sevilla = "La lluvia en Sevilla es una maravilla";
		System.out.println(sevilla);
		System.out.println("ahora lo cambiamos");

		System.out.print(sevilla.replace('a', 'e'));

	}
	public static void ejercicio24() {
		String sevilla = "La lluvia en Sevilla es una maravilla";
		int tamanio = sevilla.length();
		for(int i = 0;i<tamanio;i++) {
			System.out.print((int)sevilla.charAt(i)+" ");
		}
	}
	
}