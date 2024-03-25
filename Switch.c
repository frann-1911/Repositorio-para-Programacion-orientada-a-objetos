        #include <stdio.h>

        int main (int argc, char * argv[]){
            int numuno;
            int numdos;
            int numtres;
            int numcuatroa;
            int numcuatrob;
            int numcuatroc;
            int decision;
        printf("A que ejercicio queres acceder?? \n");
        printf("1: Calcular si es negativo o positivo \n");
        printf("2: Calcular si es par o impar \n");
        printf("3: Calcular si un numero es divisible por 2 o por 3 \n");
        printf("4: Calcular cual es el mayor de 3 numeros \n");
        scanf("%d", &decision);
        if (decision != 1 || decision != 2 || decision !=3 || decision != 4)
        {
            printf("el numero ingresado no es valido");
        }
        

        switch(decision){
            case 1:    
            printf("elegiste calcular si es negativo o positivo\n");
            printf("ingresá un valor para calcular si es negativo o positivo\n");
            scanf("%d", &numuno);
            if(numuno == 0){
                printf("el numero es cero\n");
            }
            else if (numuno > 0){
                printf("el numero es positivo\n");
            }
            else{ printf("El numero es negativo\n");}
            break;

            case 2:
            printf("elegiste calcular si es par o impar\n");
            printf("ingresa un numero para comprobar si es par o impar\n");
            scanf("%d", &numdos);
            if(numdos == 0){
                printf("el numero es cero\n");
            }
            else if( numdos % 2 == 0){
                printf("el numero es par\n");
            }
            else{printf("el numero es impar\n");}
            break;

            case 3:
            printf("elegiste calcular si es divisible por 2 o por 3\n");
            printf("ingresa un numero para comprobar si es divisible por 2 o por 3\n");
            scanf("%d", &numtres);
            if (numtres == 0)
            {
                printf("el numero es cero\n");
            }
            
            else if (numtres % 2 == 0 && numtres % 3 == 0)
            {
                printf("el numero ingresado es divisible por 2 Y por 3\n");
            }
            else if(numtres % 2 == 0 ){
                printf("el numero ingresado es divisible por 2\n");
            }
            else if(numtres % 3 == 0){
                printf("el numero ingresado es divisible por 3\n");
            }
            else{
                printf("no es divisible ni por 2 ni por 3\n");
            }

            break;

            case 4:
            printf("elegiste calcular el mayor de tres numeros\n");
            printf("ingresa los 3 numeros a comprar\n");
            printf("ingresar el numero a\n");
            scanf("%d", &numcuatroa);
            printf("ingresar el numero b\n");
            scanf("%d", &numcuatrob);
            printf("ingresar el numero c\n");
            scanf("%d", &numcuatroc);
            
                if (numcuatroa == numcuatrob && numcuatroa == numcuatroc){ 
                printf("los tres numeros son iguales \n");
            }
            else if(numcuatroa > numcuatrob && numcuatroa > numcuatroc){
                printf("el numero A es el mas grande\n");
            }
            else if(numcuatroa < numcuatrob && numcuatrob > numcuatroc){
                printf("el numero B es el mas grande\n");
            }
            else if(numcuatroc > numcuatroa && numcuatroc > numcuatrob){
                printf("el numero C es el mas grande\n");
                
            }
            break;
            
        }


        return 0;
        }
