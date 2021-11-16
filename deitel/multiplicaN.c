/*Escriba un progrma que utilice ciclos para imprimir una tabla de valores*/

#include<stdio.h>

int main(){
    int contador = 1, op1, op2, op3;

    printf("N\t10*N\t100*N\t1000*N\n");

    while (contador <= 10){
        op1 = 10 * contador;
        op2 = 100 * contador;
        op3 = 1000 * contador;

        printf("%d\t%d\t%d\t%d\n", contador, op1, op2, op3);
        contador++;
    }
}