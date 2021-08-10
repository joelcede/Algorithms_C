/*Escriba un programa que lea dos enteros y determine e imprima si es multiplo del segundo*/

#include<stdio.h>

int main(){
    int uno, dos;

    printf("Escribe dos números: "); scanf("%d %d", &uno, &dos);

    if(uno%dos==0){
        printf("Es divisible\n");
    }else{
        printf("No es divisible\n");
    }

    return 0;
}