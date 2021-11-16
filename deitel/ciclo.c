/*Escribe un programa que utilice un ciclo para imprimir los numeros 1 a 10 dentro de
la misma linea, separados cada uno por tres espacio en blanco*/

#include<stdio.h>

int main(){
    int contador = 1;

    while (contador <= 10){
        printf("%d   ",contador);
        contador++;
    }
}