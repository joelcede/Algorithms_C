/*
Escriba un programa que lea el radio de un circulo y que imprima el diametro, 
la circunferencia y el área de este circulo
*/
#include<stdio.h>

int main(){
    float radio, diametro, circunferencia, area, PI = 3.14159;

    printf("Escribe el radio: "); scanf("%f",&radio);

    diametro = radio * 2;
    circunferencia = PI * diametro;
    area = PI * (radio * radio);

    printf("El diametro es: %.2f\nLa circunferencia es: %.2f\nEl area es: %.2f\n",
            diametro, circunferencia, area);

    return 0;
}