/*imprimir un rombo por pantalla*/

#include<stdio.h>

int main(){
	int a, n, n1;
	int contador = 1;
    int numero;

    printf("Ingrese un numero del 1-19: "); scanf("%d", &numero);

    if (numero >= 1 && numero <= 19){
        for (a = numero; a >= 1; a--){
            for (n = 0; n <= a; n++){
                printf(" ");
            }
            for (n1 = 1; n1 <= contador; n1++){
                printf("*");
            }
            printf("\n");                        
            contador += 2;           
        }
        for (a = numero; a >= 1; a--){      
            for (n = numero+2; n >= a; n--){        
                printf(" ");
            }
            for (n1 = 2; n1 <= contador-3; n1 ++){
                printf("*");
            }
            printf("\n");
            contador -= 2;
        }
    }else{printf("Incorrecto\n");}
    return 0;
    
}