// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz[3][3] = {
       {4,8,1},  
       {5,3,2},
       {6,7,9}
    };
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
    
    int valor_linha00 = matriz[0][0];
    int valor_linha01 = matriz[0][1];
    
    int valor_coluna22 = matriz[2][2];
    int valor_coluna12 = matriz[1][2];
    
    matriz[0][0] = valor_coluna22;
    matriz[2][2] = valor_linha00;
    matriz[0][1] = valor_coluna12;
    matriz[1][2] = valor_linha01;
    
    printf("Matriz linha e Inversa:\n");
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }
    
    int diagonal_primaria00 = matriz[0][0];
    int diagonal_primaria22 = matriz[2][2];
    
    int diagonal_secundaria02 = matriz[0][2];
    int diagonal_secundaria20 = matriz[2][0];
    
    matriz[0][0] = diagonal_secundaria02;
    matriz[0][2] = diagonal_primaria00;
    matriz[2][0] = diagonal_primaria22;
    matriz[2][2] = diagonal_secundaria20;
    
    printf("Nova Matriz:\n");
        for (int i=0;i<3;i++){
            for (int j=0;j<3;j++){
                printf("%d\t",matriz[i][j]);
            }
            printf("\n");
        }
    
    return 0;
}
