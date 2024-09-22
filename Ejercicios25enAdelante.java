import java.util.Scanner;
import java.util.Random;

public class Ejercicios25enAdelante {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
		System.out.println("Elija un ejercicio 25-34");
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
			case 28:
			ejercicio28();
		break;
		case 29:
		ejercicio29();
		break;
		case 30:
		ejercicio30();
		break;
		case 31:
			ejercicio31();
			break;
			case 32:
			ejercicio32();
			break;
			case 33:
			ejercicio33();
			break;
			case 34:
			ejercicio34(args);
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
           num=sn.nextInt();
           
           if(num<=1){
               System.out.println("Error. No has introducido un valor correcto."
                       + "Vuelve a intentarlo");
           }
            
        }while(!(num>=1)); 
        
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
String usuario=leer.nextLine();
String fraseSinEspacios = usuario.replace(" ", "");
System.out.println("Frase sin espacios: " + fraseSinEspacios);



leer.close();
}

public static void ejercicio29(){
	Scanner scanner = new Scanner(System.in);

	StringBuilder cadenaResultante = new StringBuilder();

	while (true) {
		System.out.println("Ingrese una frase (o presione Enter para finalizar): ");
		String frase = scanner.nextLine();

		if (frase.isEmpty()) {
			break;
		}

		cadenaResultante.append(frase).append(" ");
	}

	// Mostrar la cadena resultante
	System.out.println("Cadena resultante: " + cadenaResultante.toString().trim());

	// Cerrar el scanner
	scanner.close();
}

public static void ejercicio30(){



}
public static void ejercicio31(){
	System.out.println("Ingrese una cadena de caracteres para que sea medida");
	Scanner leer = new Scanner(System.in);
	String usuario = leer.nextLine();
	int largo = usuario.length();
	System.out.println("El largo de la cadena es de "+ largo+ " caracteres");
}
public static void ejercicio32(){
	System.out.println("Ingrese una palabra");
	Scanner jano = new Scanner (System.in);
	String palabra1 = jano.nextLine();
	System.out.println("Ingrese otra palabra");
	String palabra2 = jano.nextLine();

	if (palabra1.equals(palabra2)) {
		System.out.println("la palabra " + palabra1 + " y la palabra "+ palabra2 + " son iguales");
		
	} else{
		System.out.println("la palabra " + palabra1 + " y la palabra "+ palabra2 + " NO son iguales");

	}
jano.close();

}
public static void ejercicio33(){
System.out.println("ingrese una cadena de texto");
Scanner leer = new Scanner(System.in);
String cadena = leer.nextLine();
String subcadena = cadena.substring(3,5);
System.out.println(subcadena);
}


    public static void ejercicio34(String[] args) {
     
        Scanner sn = new Scanner(System.in);
        sn.useDelimiter("\n");
        
        System.out.println("Escribe una frase");
        String frase=sn.next();
        
        String palabras[] = frase.split(" ");
        
        for(int i=0;i<palabras.length;i++){
            System.out.println(palabras[i]);
        }
        
    }
}
