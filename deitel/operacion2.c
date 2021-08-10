/*
Escriba un programa que introduzca tres diferentes enteros desde el teclado,
despues imprima la suma, el promedio, el producto, el numero mas pequeño y el mas grande de éstos.
Solamente utilice la forma de seleccion simple de la instruccion if, que aprendio en este capitulo.
*/

#include<stdio.h>

int main(){
    int uno, dos, tres, suma, promedio, producto, menor, mayor;

    printf("Escriba 3 números: "); scanf("%d%d%d",&uno, &dos, &tres);

    suma = uno + dos + tres;
    promedio = suma / 3;
    producto = uno * dos * tres;
    
    if (uno < dos && uno < tres){menor = uno;} else{mayor = uno;}
    if (dos < uno && dos < tres){menor = dos;} else{mayor = dos;}
    if (tres < uno && tres < dos){menor = tres;} else{mayor = dos;}
    
    printf("La suma es: %d\nEl promedio es: %d\nEl producto es: %d\nEl numero mas pequeño es: %d\nEl numero mas grande es: %d\n",
        suma, promedio, producto, menor, mayor);
    return 0;
}