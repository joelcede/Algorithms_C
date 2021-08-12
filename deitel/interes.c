/*el interes simple para un prestamo se calcula mediante la formula:
interes = prestamo * tasa * dias / 365*/

#include<stdio.h>

int main(){
    float prestamo, tasaInteres, interes;
    int diasPrestamos;

    while (prestamo != -1)
    {
        printf("Introduzca el monto del prestamo(-1 para salir): "); scanf("%f",&prestamo);
        printf("Introduzca la tasa de interes: "); scanf("%f",&tasaInteres);
        printf("Introduzca el periodo de prestamo en dias: "); scanf("%d", &diasPrestamos);

        interes = (prestamo * tasaInteres * diasPrestamos) / 365;
        printf("El monto del interes es: $%.2f\n\n", interes);
    }
    
    return 0;
}