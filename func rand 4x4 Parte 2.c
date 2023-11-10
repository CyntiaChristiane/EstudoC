// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int matriz[4][4] = {
    {rand()%30, rand()%30, rand()%30, rand()%30},
    {rand()%30, rand()%30, rand()%30, rand()%30},
    {rand()%30, rand()%30, rand()%30, rand()%30},
    {rand()%30, rand()%30, rand()%30, rand()%30}
    };
     for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
     }
     
     int valor_linha00 = matriz[0][0];
     int valor_linha01 = matriz[0][1];
     int valor_linha02 = matriz[0][2];
     
     int valor_coluna13 = matriz[1][3];
     int valor_coluna23 = matriz[2][3];
     int valor_coluna33 = matriz[3][3];
     
     matriz[0][0] = valor_coluna33;
     matriz[3][3] = valor_linha00;
     matriz[0][1] = valor_coluna23;
     matriz[2][3] = valor_linha01;
     matriz[0][2] = valor_coluna13;
     matriz[1][3] = valor_linha02;
     
     printf("Matriz linha e Inversa:\n");
        for (int i=0;i<4;i++){
            for (int j=0;j<4;j++){
                printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }
     
    return 0;
}
