/*Se necesita recortar el presupuesto a la mitas
a) El número de cuenta del cliente.
b) El límite de crédito antes de la recesión.
c) El saldo actual del cliente (es decir, el monto que le debe el cliente a la empresa).
Su programa debe calcular e imprimir el nuevo límite de crédito para cada cliente, y debe determinar (e impri-
mir) cuáles clientes tienen saldos que exceden los nuevos límites de crédito.
*/

#include<stdio.h>

int main(){
    int numeroCuenta, limiteCredito, creditoMitad, saldoCliente;

    printf("Ingrese el numero de cuenta: "); scanf("%d", &numeroCuenta);
    printf("Limite de credito antes de la recesión: "); scanf("%d", &limiteCredito);
    printf("Saldo de cliente: "); scanf("%d", &saldoCliente);

    printf("************************\n");
    creditoMitad = limiteCredito / 2;
    printf("Nuevo limite de credito: %d\n", creditoMitad);
    printf("%s\n", saldoCliente < creditoMitad ? "No excede el saldo" : "excede el saldo");
}