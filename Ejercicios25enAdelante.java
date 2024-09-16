import java.util.Scanner;
import java.util.Random;

public class Ejercicios25enAdelante {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
		System.out.println("Elija un ejercicio 25-30");
	    int eleccion;
	    eleccion = leer.nextInt();
	    switch(eleccion) {
	    case 25:
	 	   ejercicio25();
	 	break;
	    case 26:
	    	ejercicio26();
	    	break;
	    case 27:
	    	ejercicio27();
	    	break;
	    default:
	        System.out.println("Opcion no valida.");
	        break;
	    }
	    leer.close();
	}
	
	public static void ejercicio25() {
		int num1;
		int num2;
		String operacion;
		int result = 0;
		Scanner leer = new Scanner(System.in);
		System.out.println("Bienvenido a CalculadoraPolacaInversaApp");
		System.out.println("Use + para la suma, - para la resta, * para la multiplicacion, /para la division, % para la division con resto");
		System.out.println("ingrese el primer numero");
		num1=leer.nextInt();
		System.out.println("ingrese el segundo numero");
		num2=leer.nextInt();
		System.out.println("Ahora ingrese el simbolo para identificar que operacion");
		operacion = leer.next();
		switch(operacion) {
		case "+":
			result=num1+num2;
			break;
		case "-":
			result=num1-num2;
			break;
		case "*":
			result=num2*num1;
			break;
		case "/":
			result= num1/num2;
			break;
			
		case "%":
			result=num1%num2;
			break;
		}
		System.out.println("la operacion arrojo un resultado de "+ result);

		
		
		leer.close();
	}
	public static void ejercicio26() {
        Scanner sn=new Scanner(System.in);
        
        
        System.out.println("Inserta un numero entero mayor que 1");
        int num;
        
        do{
           //Pedimos el primer número
           num=sn.nextInt();
           
           if(num<=1){
               System.out.println("Error. No has introducido un valor correcto."
                       + "Vuelve a intentarlo");
           }
            
        }while(!(num>=1)); //condición para salir
        
        int suma=0;
        
        //Realizamos la suma
        for(int contador=1;contador<=num;contador++){
            suma+=contador;
        } 
            
        System.out.println("La suma es: "+suma);
		
		
	}
public static void ejercicio27() {
	System.out.println("Ingrese numeros para ser contados, para salir ingrese un -1");
	Scanner leer =new Scanner(System.in);
	int numeros;
	numeros = leer.nextInt();
	int contador=1;
	while(numeros != -1) {
		  contador++;
          
          numeros=leer.nextInt(); 
	}
    System.out.println("Fin, se ha introducido "+contador+" numeros");
leer.close();
}

public static void ejercicio28() {
System.out.println("Ingrese una frase");
Scanner leer=new Scanner(System.in);
String usuario=leer.next();



leer.close();
}
	
	
}
