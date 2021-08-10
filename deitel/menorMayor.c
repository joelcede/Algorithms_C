/*Escriba un programa que lea 5 numeros enteros y diga cual es el mayor y el menor*/

#include<stdio.h>

int main(){
    int uno, dos, tres, cuatro, cinco, menor, mayor;

    printf("Ingrese 5 valores separados por espacio: "); 
    scanf("%d%d%d%d%d",&uno, &dos, &tres, &cuatro, &cinco);

    if (uno<dos && uno<tres && uno<cuatro && uno<cinco){menor = uno;}
    if (uno>dos && uno>tres && uno>cuatro && uno>cinco){mayor = uno;}

    if(dos<uno && dos<tres && dos<cuatro && dos<cinco){menor = dos;}
    if (dos>uno && dos>tres && dos>cuatro && dos>cinco){mayor = dos;}

    if(tres<uno && tres<dos && tres<cuatro && tres<cinco){menor = tres;}
    if (tres>uno && tres>dos && tres>cuatro && tres>cinco){mayor = tres;}

    if(cuatro<uno && cuatro<dos && cuatro<tres && cuatro<cinco){menor = cuatro;}
    if (cuatro>uno && cuatro>dos && cuatro>tres && cuatro>cinco){mayor = cuatro;}

    if(cinco<uno && cinco<dos && cinco<tres && cinco<cuatro){menor = cinco;}
    if (cinco>uno && cinco>dos && cinco>tres && cinco>cuatro){mayor = cinco;}

    printf("%d es el menor de todos\n",menor);
    printf("%d es el mayor de todos\n", mayor);
    return 0;
}