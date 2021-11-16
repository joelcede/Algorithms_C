/*Modificar el programa medida cuadrada, pero sin lo de adentro(yo me entiendo xd)
referencia a medidadCuadrado.c
***
* *
***
*/

#include<stdio.h>

int main(){
    int tamano;

    printf("Ingresa la medida NxN: "); scanf("%d", &tamano);

    for (size_t i = 0; i < tamano; i++)
    {
        if (i){printf("\n");}
        for (size_t j = 0; j < tamano; j++)
        {
            if (i==0){printf("*");}
            if (i>0 && i<tamano-1)
            {
                if (j==0){printf("*");}
                if (j==tamano-2){printf("*");}
                else{printf(" ");}          
            }
            if(i==tamano-1){printf("*");}
        }
    }
    printf("\n");
}