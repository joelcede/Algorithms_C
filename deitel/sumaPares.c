/*Escriba un programa que calcule e imprima la suma de los enteros pares de 2 al 30*/

#include<stdio.h>

int main(){
    int total = 0;
    for (int i = 2; i <= 30; i+=2){
        total += i;
    }
    printf("%d\n", total);
    
}