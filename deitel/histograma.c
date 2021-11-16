/*
Una interesante aplicación de las computadoras es dibujar gráficos de barras (en ocasiones llamadas “histogra-
mas”). Escriba un programa que lea cinco números (cada uno entre 1 y 30). Por cada número leído, su programa
debe imprimir una línea que contenga dicho número con asteriscos adyacentes. Por ejemplo, si su programa lee el
número 7, debe imprimir *******
*/
#include<stdio.h>

int main(){
    int numero;

    for (int i = 0; i < 5; i++){
        printf("Ingrese un número: "); scanf("%d", &numero);
        if (numero >= 1 && numero <= 30){
            for (int i = 0; i < numero; i++){
                printf("*");
            }
            printf("\n");
            
        }else{
            printf("Intente de nuevo\n");
            i--;
        }
    }
    
}