package com.ejercicios;

import java.util.Scanner;

public class Ejerciciouno{
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
    	   ejercicio3();
    	   break;
       case 4:
    	   ejercicio4();
    	   break;
       case 5:
    	   ejercicio5();
    	   break;
       default:
           System.out.println("Opción no válida.");
           break;
       }
       leer.close();
    }
	public static void ejercicio1() {
		 int num = 0;
	        for(int i=0; i<=100; i++){
	            num += 1;
	        
	            if(num % 2 == 0){
	                System.out.println("El nro " + num + " es par");
	            }
	            else{    System.out.println(num);}
	        }
	}
	public static void ejercicio2() {
		
		for(int i = 50; i <= 100; i++){
		if (Primo(i)) {
            System.out.println(i + " es un número primo.");
        } else {
            System.out.println(i + " no es un número primo.");
        }}
    }
	
	 public static boolean Primo(int n) {
	        if (n <= 1) {
	            return false;
	        }

	        for (int i = 2; i <= Math.sqrt(n); i++) {
	            if (n % i == 0) {
	                return false; 
	            }
	        }

	        return true; 
	    }
	 public static void ejercicio3() {
		 int num;
		 Scanner leer = new Scanner(System.in);
	     do{  
	    System.out.println("Escriba numeros");
	       num = leer.nextInt();
	       System.out.println("El numero escrito es "+ num);
	       if(Primo(num)) {
	    	   System.out.println("y encima es primo");
	       }
	      
	     }while(num < 100);
	  
	     leer.close();
System.out.println("El numero escrito era mayor a 100 por lo que se sale del programa");
	 }
	
	 public static void ejercicio4() {
		 Scanner leer = new Scanner(System.in);
		 System.out.println("Que desea hacer?");
		 System.out.println("1. sumar 2.restar 3.multiplicar 4. dividir");
		 int calc = leer.nextInt();
		 switch(calc) {
		 case 1:
			 System.out.println("Ingrese los dos numeros a ser sumados");
			 int n1=leer.nextInt();
			 int n2=leer.nextInt();
			int result = sumar(n1, n2);
			 System.out.println(result);
			 
			 break;
			 default:
				 System.out.println("No es una opcion valida");
	
			 break;
			 case 2:
				 System.out.println("Ingrese los dos numeros a ser Restados. Al primer numero se le restara el segundo");
				 int nr1=leer.nextInt();
				 int nr2=leer.nextInt();
				int resto = restar(nr1, nr2);
				 System.out.println(resto);
				 break;
			 case 3:
				 System.out.println("Ingrese los dos numeros a ser multiplicados");
				 int nm1=leer.nextInt();
				 int nm2=leer.nextInt();
				int producto = multi(nm1, nm2);
				 System.out.println(producto);
				 break;
			 case 4:
				 System.out.println("Ingrese los dos numeros a ser divididos. El primer numero sera dividido por el segundo");
				 int nd1=leer.nextInt();
				 int nd2=leer.nextInt();
				int division = dividir(nd1, nd2);
				 System.out.println(division);
				 break;
		
		 }
		 leer.close();
	 }
	public static int sumar(int x, int y) {
		int result = x + y;
		return result;
	 }
	public static int restar(int x, int y) {
		int resto = x - y;
		return resto;
	}
	public static int multi(int x, int y) {
		int producto = x * y;
		return producto;
	}
	public static int dividir(int x, int y) {
		int division = x / y;
		return division;
	}
public static void ejercicio5() {
	String[] autos = {"Volvo", "BMW", "Ford", "Mazda", "Toyota", "Fiat", "Peugeot"};
	for (String i : autos) {
	  System.out.println(i);
	}
}
	
}