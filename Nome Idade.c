// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

/*
Valores que o scanf recebe:

Quando for texto: scanf("%s", NomeDaSuaVariável);
    NOTA: Se você vai usar espaçamento no recebimento de variável
          Utilizar "%[^\n]" invés de "%s" para não causar bugs.
Quando for número inteiro: scanf("%d", &NomeDaSuaVariável);
Quando for número com vírgula: scanf("%.2f", &NomeDaSuaVariável);

Adendo: scanf não mostra texto algum na tela, ele mostra o cursor para
o usuário poder digitar algo e receber um texto digitato após apertar
enter.
*/

/*
Tipos de porcentagem:
Quando sua variável for do tipo "int" você usa "%d" (número inteiro)
Quando sua variável for do tipo "char[]" ou "char*" você usa "%s" (texto)
    NOTA: Se você vai usar espaçamento no recebimento de variável
          Utilizar "%[^\n]" invés de "%s" para não causar bugs.
Quando sua variável for do tipo "float" ou "double" você usa "%.2f" (n° c/ vírgula)

Usos do printf

Quando for mostrar um texto na tela:
    printf("seu texto entre aspas");
Quando seu texto usa valor de variáveis:
    printf("seu texto %tipo", nomeDaVariavel);
Quando seu texto usa valor de mais de uma variável:
    printf("texto 1 %s\ntexto 2 %d", NomeDaVariavelTexto, NomeDaVariavelInteiro);
*/

int main() {
    char nome[20];
    int idade;
    
    printf("Nome: ");
    scanf("%[^\n]",nome);
    printf("Idade: ");
    scanf("%d",&idade);
    

    printf("Seu nome é %s\nSua idade é %d", nome, idade);

    return 0;
}
