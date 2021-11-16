/*Escriba un programa que imprima los patrones "arboles"*/

#include<stdio.h>

int main(){
    int inicio = 1, inicio2 = 12, contador = 0;

    printf("\nA)\n");
    for (inicio; inicio <= 10; inicio++){
        for (int i = 0; i < inicio; i++){printf("*");}  
        printf("\n");
    }

    printf("\nB)\n");
    for (inicio; inicio > 1; inicio--){
        for (int i = inicio; i > 1; i--){printf("*");}  
        printf("\n");
    }
    printf("\nC)\n");
    for (int i = 10; i > 0; i--){
        for (int j = 10; j > 0; j--){
            if(i < j){printf(" ");}
            else{printf("*");}
        }  
        printf("\n");
    }
    printf("\nD)\n");
    for (int i = 10; i >= 0; i--){
        for (int j = 0; j < 10; j++){
            if(j < i){printf(" ");}
            else{printf("*");}
        }  
        printf("\n");
    }
}