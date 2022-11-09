#include<stdio.h>
#include<stdlib.h>

int main(){
    //Funciones en C
    //Y luego la llamamos desde la funcion principal
    HolaMundo("Luis");
    HolaMundo("Juan");
    HolaMundo("Pedro");



    return 0;
}

//Creamos nuestra funcion por fuera de la funcion principal

void HolaMundo(char nombre[]){
    printf("Hola %s\n", nombre);
}