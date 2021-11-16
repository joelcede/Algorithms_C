/*Escribe un programa que introduzca de números y determine e imprima el mayor de estos*/

#include<stdio.h>

int main(){
    int contador = 0, numero, mayor = 0;

    while (contador < 10){
        printf("Escribe un numero entero: "); scanf("%d", &numero);
        
        if (numero > mayor){
            mayor = numero;
        }
        contador++;
    }
    printf("El mayor es %d", mayor);
}