/*
Escriba un programa que sume secuencias de enteros mediante un scanf
*/

#include<stdio.h>

int main(){
    int secuencia, valorTotal = 0, valorSecuencia;

    printf("Escribe un valor: "); scanf("%d", &secuencia);

    for (int i = 0; i < secuencia; i++){
        printf("Ingresa un valor: "); scanf("%d", &valorSecuencia);
        valorTotal += valorSecuencia;
    }
    printf("%d\n", valorTotal);
}