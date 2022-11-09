#include<stdio.h>
#include<stdlib.h>

int main(){
    //Arrays en C
    //Un array es una variable en la que podemos guardar varios datos de un mismo tipo
    //Definimos el tipo del array y luego le asignamos el nombre
    int edades[] = {23, 34, 24, 67};
    //Puedo modificar una posicion en concreto del array de la sig forma
    edades[2] = 102;
    //Para mostrar un valor dentro del array debemos llamar al nombre de la variable y entre corchetes ponerl el numero de la posicion del valor deseado
    printf("%d", edades[2]);
    return 0;
}