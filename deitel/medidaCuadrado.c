/*Escriba un programa que lea la medida de uno de los lados de un cuadrado y que despliegue
dicho cuadrado con asteriscos.*/

#include<stdio.h>

int main(){
    int tamano;

    printf("Ingresa la medida NxN: "); scanf("%d", &tamano);

    for (size_t i = 0; i < tamano; i++){
        if(i){printf("\n");}
        for (size_t j = 0; j < tamano; j++){
            printf("*");
        }
        
    }
    
    printf("\n");
}