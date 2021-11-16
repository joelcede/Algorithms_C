/*Utilizar \t. Escriba un programa que utilice ciclos para hacer una tabla de valores*/

#include<stdio.h>

int main(){
    int contador = 3, op1, op2, op3;

    printf("A\tA+2\tA+4\tA+6\n");

    while ( contador <= 15){
        op1 = contador + 2;
        op2 = contador + 4;
        op3 = contador + 6;
        printf("%d\t%d\t%d\t%d\n", contador, op1, op2, op3);
        contador = contador + 3;
    }
}