#include<stdio.h>
#include<stdlib.h>

int main(){
    // //Trabajo con archivos en C
    // //Creara un archivo y escribir informacion en el 
    // FILE *parch = fopen("Planilla_de_alumnos.txt", "w");
    // /*Esta funcion nos pide dos parametros, el primero es el nombre del archivo y el regundo es la accion que se quiere hacer con ese archivo, en este caso crearlo*/
    // fprintf(parch, "Juan, 6.7\n");
    // fprintf(parch, "Pepe, 5.7\n");
    // fprintf(parch, "Luis, 8.9\n");
    // fprintf(parch, "Jhon, 7.5\n");

    // //Cerramos el archivo
    // fclose(parch);

    //Leer elementos sobre un archivo
    char linea[255];
    FILE *parch = fopen("Planilla_de_alumnos.txt", "r");
    fgets(linea, 255, parch);

    printf("%s", linea);
    fclose(parch);
    return 0;

}