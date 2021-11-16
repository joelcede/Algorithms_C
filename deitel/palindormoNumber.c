/*escriba un palindromo que lea 5 numeros y determine si es o no, un palindromo*/

#include<stdio.h>

int main(){
    int numeroHasta5, copia;
    int op1, op2=0;

    while (numeroHasta5 != -1){
        printf("Escribe un numero de 5 digitos: "); scanf("%d", &numeroHasta5);
        copia = numeroHasta5;
        if (copia != -1){
            while (copia > 0){
                op1 = copia % 10; copia = copia / 10;
                op2 = (op2 * 10) + op1;
            }
            if (op2 == numeroHasta5){printf("%d es un número palindromo\n", op2);}
            else{printf("%d no es igual a %d por lo tanto no es un número palindromo\n", op2, numeroHasta5);}
            op2 = 0;
        }else{
            break;
        }
    }
}