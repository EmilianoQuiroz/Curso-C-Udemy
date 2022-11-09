#include<stdio.h>
#include<stdlib.h>

int main(){
    //Condicional if en C
    int numero1 = 23;
    int numero2 = 45;

    if(numero1 > numero2){
        printf("el numero %d es mayor que el numero %d", numero1, numero2);
    } else if(numero2 > numero1){
        printf("el numero %d es mayor que el numero %d", numero2, numero1);
    }else {
        printf("Los numeros son iguales");
    }

    return 0;
}