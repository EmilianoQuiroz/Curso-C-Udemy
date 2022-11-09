#include<stdio.h>
#include<stdlib.h>

int main(){
    //Direcciones de memoria en C
    int entero = 5;
    double decimal = 10.2;
    char letra = 'A';
    printf("%p\n", &entero);
    printf("%p\n", &decimal);
    printf("%p\n", &letra);

    //Me muestra la direccion en memoria en la que se encuentran los datos

    return 0;
}