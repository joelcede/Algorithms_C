/*Escriba un progrma que lea un entero y que determine so es par o impar*/

#include<stdio.h>

int main(){
    int num;

    printf("Escriba un numero: "); scanf("%d",&num);

    if (num%2==0){
        printf("Es par\n");
    }else{
        printf("Es impar\n");
    }

    return 0;
}