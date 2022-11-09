#include<stdio.h>
#include<stdlib.h>

//si queremos que una funcion nos devuelva un valor la tenemos que declarar antes de la funcion princial
int cubo(int numero){
    int resultado = numero * numero * numero;
    return resultado;
}
int main(){
    //Como utilizar la sentencia return en C
    printf("%d\n", cubo(2));
    printf("%d\n", cubo(5));
    printf("%d\n", cubo(34));
    printf("%d\n", cubo(29));

    return 0;
}

