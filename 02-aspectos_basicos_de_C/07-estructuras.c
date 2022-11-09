#include<stdio.h>
#include<stdlib.h>

struct alumnos
{
    /* data */
    char nombre[30];
    int edad;
    double nota;
};

int main(){
    /** Una estructura es una estructura de datos que nos va a permitit almacenera variables de distintos tipos de datos, estas se definen en la parte exterior a la funcion main*/
    struct alumnos alumno1;
    alumno1.edad = 21;
    alumno1.nota = 7.2;
    strcpy(alumno1.nombre, "Juan");

    struct alumnos alumno2;
    alumno2.edad = 22;
    alumno2.nota = 8.4;
    strcpy(alumno2.nombre, "Pepe");

    struct alumnos alumno3;
    alumno3.edad = 21;
    alumno3.nota = 8.9;
    strcpy(alumno3.nombre, "Luis");

    printf("El alumno %s de %d años tiene un promedio de %.2f\n", alumno1.nombre, alumno1.edad, alumno1.nota);
    printf("El alumno %s de %d años tiene un promedio de %.2f\n", alumno2.nombre, alumno2.edad, alumno2.nota);
    printf("El alumno %s de %d años tiene un promedio de %.2f\n", alumno3.nombre, alumno3.edad, alumno3.nota);

    return 0;
}