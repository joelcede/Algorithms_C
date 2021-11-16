/* Escribe un programa que calcule e imprima el promedio de varios entero*/

#include<stdio.h>

int main(){
    int promedio, suma = 0,contador = 0, valor;

    while (valor != 9999){
        printf("Ingrese un numero: "); scanf("%d", &valor);
        suma += valor;
        contador++;
        if (valor == 9999){
            suma -= 9999;
            contador--;
        }
    }
    promedio = suma / contador;
    printf("Promedio: %d\n", promedio);
}