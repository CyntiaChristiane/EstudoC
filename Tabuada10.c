// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);
    for(int cont=1; cont<=10; cont++) {
        printf("%d x %d = %d\n", cont, num, num * cont);    
    }
    return 0;
}
