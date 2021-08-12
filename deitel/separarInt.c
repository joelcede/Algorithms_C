/*
Escriba un programa que introduzca un número de cinco digitos,
que separe el número en sus digitos individuales y que despliegue
los digitos separados entre si mediante tres espacio cada uno
*/

#include<stdio.h>

int main(){
    int numero, uno, dos, tres, cuatro, cinco;
    printf("Escribe un número de 5 digitos: "); scanf("%d",&numero);
    
    uno = numero / 10000; numero = numero % 10000;
    dos = numero / 1000; numero = numero % 1000;
    tres = numero / 100; numero = numero % 100;
    cuatro = numero / 10; numero = numero % 10;
    cinco = numero / 1;
    printf("%d   %d   %d   %d   %d\n", uno, dos, tres, cuatro, cinco);
    return 0;
}