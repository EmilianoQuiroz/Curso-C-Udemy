#include<stdio.h>
#include<stdlib.h>

int main(){
    double flotante = 10.123345556;
    int numero = 10;
    //Mostrar datos en C
    //Esto se hace mediante la funcion printf
    printf("Hola mundo\n");

    //Tambien podemos introducir variables dentro de esta funcion

    printf("El numero es %d \n", numero);
    
    //Redondeo de numeros decimales
    /** Esto se hace agregando un . y el numero correspondiente a la cantidad de decimales que queremos redondear en el especificador de formato*/
    printf("El numero flotante redondeado es %.2f",flotante);

    return 0;
}