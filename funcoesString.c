#include <stdio.h>
#include <string.h> 

int main(){

    char nome[] = "Marcos";
    char sobrenome[] = "Almeida";    


    // strlwr(nome);                // Faz com que as letras minúsculas. 
    // strupr(nome);                   // Reescreve as papavras apenas com letras maiúsculas. 

    // strcat(nome, sobrenome); // Adiciona a primeira string a segunda string.
    // strncat(nome, sobrenome, 3);  // Adiciona uma quantidade determinada de caracteres de uma string a outra. 

    // strcpy(nome, sobrenome); //   Copia a segunda string na primeira. 

    // strncpy(nome, sobrenome,4); // Copia uma parte específicada da segunda string na primeira string.    

    // strset(nome, '*'); // Esta função os caracteres da string pelo asterísco. 
    // strnset(nome, '*', 2); // Indica a quantidade de caracteres que devem ser substituídas pelo asterísco. 

    // strrev(nome); // Esta função reverte a posição dos elementos em uma string. 

    // int resultado = strlen(nome); // Contando a quantidade de caracteres que uma string possui.

    int resultado = strcmp(nome, sobrenome); // Comparando às duas strings. 

    // printf("Seu nome: %s %s.", nome, sobrenome); 

    printf("%d", resultado);

    if (resultado == 0) {

        // Retorna 2
        printf("As duas strings possuem o mesmo tamanho.");

    } else {

        // Retorna 1
        printf("As duas strings possuem comprimento diferente.");
    }





    return 0;
}