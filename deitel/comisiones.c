/*Una gran empresa de productos quimicos le paga a sus vendedores mediantes un esquema de comisiones
los vendedores  reciben $200 semanales mas el 9% de sus ventas totales durante la semana*/

#include<stdio.h>

int main(){
    float totalVentas, salario;
    
    while (totalVentas != -1)
    {
        printf("Introduzca las ventas en pesos(-1 paraa terminar): "); scanf("%f",&totalVentas);
        salario = 200 + (totalVentas * 9) / 100;
        printf("El salario es: %.2f\n", salario);
    }
    
    return 0;
}