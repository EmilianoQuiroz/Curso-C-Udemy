#include<stdio.h>
#include<stdlib.h>

int main(){
    //Bucle While
    //En el bucle while primero se cumple la condicion y luego se ejecuta el codigo
    int i = 1;
    //Mientras i sea menor o igual a 10
    // while (i<=10)
    // {
    //     /* se ejecuta este codigo*/
    //     printf("%d\n",i);

    //     i = i + 1;
    // }

    //Bucle do while
    //Primero ejecuto el codigo y luego pregunta la condicion
    do{
        printf("%d\n",i);

        i = i +1;

    }while(i<=10);

    
    
    return 0;
}