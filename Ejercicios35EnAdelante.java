import java.util.Scanner;
import java.util.Random;

public class Ejercicios35EnAdelante {
	public static void main(String[] args) {
		Scanner leer = new Scanner(System.in);
		System.out.println("Elija un ejercicio 35-39");
	    int eleccion;
	    eleccion = leer.nextInt();
	    switch(eleccion) {
	case 35 :
    ejercicio35(args);
    break;
    case 36:
    
    break;
    case 37:

    break;
    case 38:

    break;
    case 39:

    break;
	    default:
	        System.out.println("Opcion no valida.");
	        break;
	    }
	    leer.close();

        
	}
    public enum DiasSemana {
        LUNES,
        MARTES,
        MIERCOLES,
        JUEVES,
        VIERNES,
        SABADO,
        DOMINGO;
        
    }
public static void ejercicio35(String[] args){
    Scanner leer = new Scanner(System.in);
        System.out.println("Escribe un dia de la semana");
        String dia = leer.next();
        
        DiasSemana diaS = DiasSemana.valueOf(dia.toUpperCase());
        
        switch(diaS){
            case LUNES:
            case MARTES:
            case MIERCOLES:
            case JUEVES:
            case VIERNES:
                System.out.println("El dia "+diaS.name().toLowerCase()+" es laborable");
                break;
            case SABADO:
            case DOMINGO:
                System.out.println("El dia "+diaS+" no es laborable");
                break;

}


}


public static void ejercicio36(){
    
}
}