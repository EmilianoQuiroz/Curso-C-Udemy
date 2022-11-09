#include<stdio.h>
#include<stdlib.h>

int main(){
    //Condicional switch
    double num1 = 5.0;
    double num2 = 3.0;
    char operacion = 'k';
    switch (operacion)
    {
    //Caso de suma
    case '+' :
        printf("%f + %f = %f", num1, num2, num1 + num2);
        break;
    //Caso de resta
    case '-' :
        printf("%f - %f = %f", num1, num2, num1 - num2);
        break;
    //Caso de multiplicacion
    case '*' :
        printf("%f  * %f = %f", num1, num2, num1 * num2);
        break;
    //Caso de divicion
    case '/' :
        printf("%f / %f = %f", num1, num2, num1 / num2);
        break;
    default:
        printf("Error");
    }
    return 0;
}