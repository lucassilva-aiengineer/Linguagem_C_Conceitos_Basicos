#include <stdio.h>

// Loop For 

// O Laço de repetição for é utilizado para executar um bloco ou seção de código uma quantidade específicada de vezes.

int main(){

    char nome[10]; 

    printf("Indique o seu nome: ");
    scanf("%s", &nome); 

    // int imprecoesFeitas = 0

    // int imprecoesFazer = 10
    // for (imprecoesFeitas <= imprecoesFazer){

    //     printf("Olá %s", nome)

    //     imprecoesFeitas ++; 

    // }

    // Forma correta. 

    // Onde começamos; índice de parada; incrementado uma unidade. 

    // for (int i = 0; i < 10; i ++){
    // for (int i = 0; i < 10; i += 2){
    // for (int i = 10; i > 0; i --){
    for (int i = 10; i > 0; i -= 2){




        printf("%d", i);
        printf("\nOla %s! \n", nome);
    }

    return 0;
}