#include<stdio.h>
#include<stdlib.h>

int main(){
    //Bucles anidados en C

    int array[3][4] = {{1,2,3,4},
                    {5,6,7,8,},
                    {9,10,11,12}
                    };
    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 4; j++)
        {
            printf("%d\n", array[i][j]);
        }
        printf("Iteracion completada");
    }
    
    return 0;
}