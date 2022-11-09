#include<stdio.h>
#include<stdlib.h>

int main(){
    //Punteros en C
    /** Un puntero es un tipo de dato que nos permite acceder a la direccion en memoria de una variable que previamente hemos definido*/
    int entero = 8;
    double decimal= 2.1;
    char letra = 'A';
    //Para definir una variable como puntero tenemos que poner el asterisco despues del tipo de variable
    int *pentero = &entero;

    // printf("%p", entero);
    //Este print nos da la direccion en memoria de esta variable

    //Desrreferenciar un puntero
    printf("%d", *pentero);
    //Este print me vuelve a devolver el valor original de la variable
    return 0;
}