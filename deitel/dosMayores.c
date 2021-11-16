/*Encontrar los 2 valores maximos*/

#include<stdio.h>

int main(){
    int contador = 0, numero, mayor = 0, segMayor = 0;

    while (contador < 5){
        printf("Escribe un numero entero: "); scanf("%d", &numero);
        
        if (numero > mayor){
            mayor = numero;
        }
        else if (segMayor != mayor && segMayor < numero){
            segMayor = numero;
        }
        contador++;
    }
    printf("El mayor es %d\n", mayor);
    printf("El segundo mayor numero es: %d\n", segMayor);
}