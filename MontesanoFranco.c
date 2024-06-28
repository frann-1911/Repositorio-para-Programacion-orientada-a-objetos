#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//use online gdb, ahi funcionan los colores
//use online gdb, ahi funcionan los colores
//use online gdb, ahi funcionan los colores
//use online gdb, ahi funcionan los colores
//use online gdb, ahi funcionan los colores
//https://www.onlinegdb.com


//Declaro las constantes, ya que estos datos no cambiarán a lo largo del ejercicio;
#define num_operarios 6
#define tipos_alfajores 4

//declaro arrays con los gustos y los precios. Cosas que no van a cambiar
const char *tipos[] = {"Chocolate", "Dulce de leche", "Fruta", "Mixto" };//los gustos o sabores de alfajor
const float precios[] = {1100.0,  1150.0, 800.0, 1000.0}; // precios por caja de cada tipo de alfajorr

//genero una funcion que calcule Los errores en las entregas, las ganancias, los alfajores fuera de produccion, los sobrantes, etc.

void calcularResultados(int operarios[], int tipos[], int cantidades[], int n, int *entregasConError, float ganancias[], int fueraProduccionOperarios[], int produccionPorTipo[][tipos_alfajores], float *ingresoTotal) {
    *entregasConError = 0;
    *ingresoTotal = 0;
    
    for (int i = 0; i < n; i++) {
        int cajas = cantidades[i] / 6; //calculo las cajas enteras
        int sobrantes = cantidades[i] % 6;//calculo los alfajores que sobran
        if (sobrantes > 0) {
            (*entregasConError)++;
        }
        ganancias[tipos[i] - 1] += cajas * precios[tipos[i] - 1]; // calculo las ganancias haciendo cajas enteras X precio
        fueraProduccionOperarios[operarios[i] - 1] += sobrantes; //Calculo lo que cada operario produjo fuera de la produccion (valga la redundancia)
        produccionPorTipo[operarios[i] - 1][tipos[i] - 1] += cantidades[i];//
        *ingresoTotal += cajas * precios[tipos[i] - 1];//calculo ing tot
    }
}

int main() {
    int n;

    printf("\033[0;32mBienvenido al sistema de produccion de alfajores\033[0m\n");
    printf("\033[0;32mIngrese la cantidad de registros que desea ingresar: \033[0m"); // se solicita la cantidad de entregas que queremos ingresar
    scanf("%d", &n);
    //le tiro las opciones q tiene para elegir
    int operarios[n], tiposAlfajor[n], cantidades[n];
    printf("\n Seleccione el Operario:\n");
    for (int i = 1; i <= num_operarios; i++) {
        printf("Ingrese %d para Operario %d\n", i, i);
    }

    printf("\nSeleccione el Tipo de Alfajor:\n");
    for (int i = 1; i <= tipos_alfajores; i++) {
        printf("Ingrese %d para %s\n", i, tipos[i - 1]);
    }

    //A continuacion le pedire al usuario que ingrese los datos
    printf("\nIngrese los datos de produccion (Operario Tipo Cantidad):\n");
    for (int i = 0; i < n; i++) {
        printf("Registro %d: ", i + 1);
        scanf("%d %d %d", &operarios[i], &tiposAlfajor[i], &cantidades[i]);
    }

    int entregasConError;
    float ganancias[tipos_alfajores] = {0};
    int fueraProduccionOperarios[num_operarios] = {0};
    int produccionPorTipo[num_operarios][tipos_alfajores] = {{0}};
    float ingresoTotal;
//int 

    calcularResultados(operarios, tiposAlfajor, cantidades, n, &entregasConError, ganancias, fueraProduccionOperarios, produccionPorTipo, &ingresoTotal);
// a continuacion imprimo todos los resultados que pide ek ejercicio y el total
    printf("\n\033[1;32m--- resultados ---\033[0m\n");
    printf("\033[1;31mCantidad total de entregas con error: \033[0m%d\n", entregasConError); // las entregas con err
    for (int i = 0; i < tipos_alfajores; i++) {
        printf("\033[1;31mGanancia por tipo  de alfajor (%s): \033[0m%.2f\n", tipos[i], ganancias[i]); //ganancia por gusto de alfajor. Uso un for para que imprima de todos los alf
    }
    // uso un for anidado para que de cada operario me diga cada gusto y sus producidos
    for (int i = 0; i < num_operarios; i++) {
        printf("\033[1;31mOperario %d:\033[0m\n", i + 1);
        for (int j = 0; j < tipos_alfajores; j++) {
            if (produccionPorTipo[i][j] > 0) {
                printf("  \033[1;31m Alfajores de %s: %d  alfajores producidos\033[0m\n", tipos[j], produccionPorTipo[i][j]);
            }
        }
        if (fueraProduccionOperarios[i] > 0) {
            printf("  \033[1;31mAlfajores fuera de produccion: %d\033[0m\n", fueraProduccionOperarios[i]); //imprimo los fuera de produccion
        }
    }
    printf("\033[1;32mIngreso total en pesos :$%.2f\033[0m\n", ingresoTotal); //imprimo el iongreso total de dinero
}

//use colores rojo y verde