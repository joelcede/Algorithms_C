/*
Escriba un programa que pida al usuario que introdzca dos enteros, que obtenga
por parte del usuario, despues que imprima las palabras "es mas grande". si los numeros son iguales,
que imprima el mensaje "estos numeros son iguales". solamente utilice la forma de seleccion simple de la instruccion if,
que aprendio en este capitulo.
*/

#include <stdio.h>

int main(){
    int uno, dos;

    printf("Escribe un numero: "); scanf("%d",&uno);
    printf("Escribe otro numero: "); scanf("%d",&dos);

    printf("Es mas grande\n");
    if (uno == dos){printf("Estos numero son iguales.\n");}

    return 0;
}