
#include<stdio.h>

int main(){
    int numeroProducto, productosVendidosDia, productosVendidosSemana, cantidad;
    float precio1 = 2.98, precio2 = 4.50, precio3 = 9.98, precio4 = 4.49, precio5 = 6.87, total;

    printf("Escriba el numero del producto: "); scanf("%d", &numeroProducto);
    printf("Cuantos productos se vendiero hoy?: "); scanf("%d", &productosVendidosDia);

    switch (numeroProducto){
        case 1:
            printf("Precio 1: %.2f\n", precio1);
            break;
        case 2:
            printf("precio 2: %.2f\n", precio2);
            break;
        case 3:
            printf("precio 3: %.2f\n", precio3);
            break;
        case 4:
            printf("precio 4: %.2f\n", precio4);
            break;
        case 5:
            printf("precio 5: %.2f\n", precio5);
            break;
        default:
            printf("Número no listado\n");
            break;
    }
    for (int i = 1; i <= 5; i++){
        printf("Productos vendidos en toda las semana [lista %d]: ", i); scanf("%d", &cantidad);
        if(i == 1){total = total + (precio1 * cantidad);}
        if(i == 2){total = total + (precio2 * cantidad);}
        if(i == 3){total = total + (precio3 * cantidad);}
        if(i == 4){total = total + (precio4 * cantidad);}
        if(i == 5){total = total + (precio5 * cantidad);}
    }
    printf("Total de las ventas en la semana: %.2f", total);
    
}