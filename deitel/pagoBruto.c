/*Su programa debera introducir esta informacion para cada empleado, debera determinar y desplegar el pago bruto por empleado*/

#include<stdio.h>

int main(){
    int horaLaboradas;
    float pagoHora, salario;

    while (horaLaboradas != -1){
        printf("No. de hora laborales(-1 para terminar): "); scanf("%d", &horaLaboradas);
        if (horaLaboradas != -1){
            printf("Introduzca el pago por hora: "); scanf("%f", &pagoHora);
            salario = horaLaboradas * pagoHora;
            printf("El salario es: %.2f\n", salario);
        }
    }
}