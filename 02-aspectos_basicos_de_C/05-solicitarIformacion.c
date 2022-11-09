#include<stdio.h>
#include<stdlib.h>

int main(){
    int dinero;
    char letra;
    //Primero le decimos al usuario que dato queremos que ingrese
    printf("Introduce cuanto dinero tenes: ");
    //Luego guardamos esos datos
    scanf("%d", &dinero);
    //Por ultimo mostramos el dato por pantalla
    printf("Tienens %d \n", dinero); 
    //Podemos pedir y mostrar cualquier tipo de dato

    return 0;
}