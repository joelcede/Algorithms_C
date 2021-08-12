/*Determine si un cliente de una tienda departamental excede el limite de credito
de su cuenta.*/

#include<stdio.h>

int main(){
    int numCuenta;
    float saldoInicial, cargos, creditoAplicado, limiteCredito, nuevoSaldo;
    

    while(numCuenta != -1){
        printf("Inrodusca el número de la cuenta(-1 para salir): ");scanf("%d", &numCuenta);

        printf("Introduzca el saldo inicial: "); scanf("%f",&saldoInicial);
        printf("Introduzca el total de cargos: "); scanf("%f",&cargos);
        printf("Introduzca el total de creditos: "); scanf("%f",&creditoAplicado);
        printf("Introduzca el limite de credito: "); scanf("%f",&limiteCredito);

        nuevoSaldo = saldoInicial + cargos - creditoAplicado;
        printf("Cuenta: %d\n", numCuenta);
        printf("Limite de credito: %.2f\n", limiteCredito);
        printf("Saldo: %.2f\n", nuevoSaldo);
        printf("%s\n", (nuevoSaldo > limiteCredito)? "Limite de saldo excedido" : "Saldo no excedido");


    }
    return 0;
}