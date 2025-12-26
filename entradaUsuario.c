// Entrada de usuário. 

#include <stdio.h> 
#include <string.h>
// Este include funciona como, incluirmos um arquivo em C, ao nósso código, incluimos este arquivo padrão que nos 
// permite acessar funções padrão da líguagem c, o que nos possíbilita não termos que codificar tudo do 0. 



// Em C nós utilizamos a função scanf(); que nos permite recebermos as entradas de usuário. 


int main(){

    int idade; 
    // Declaramos uma variável, alocamos um espaço na memória que será destinado a receber um valor que pertence a um 
    // tipo de dados específicos.

    char nome[25]; // bytes

    printf("Qual a sua idade?");
    scanf("%d", &idade);
    // Indicamos o específicador de formato da variável que receberá o valor, e apontamos o valor a variável.

    printf("Indique o seu nome:"); 
    scanf("%s", &nome);

    // A função scanf(), não registra partes da entrada que vão além do espaço. 
    // Para termos que possuem espaços em branco utilizaremos a função fgets 

    char nomeCompleto[30]; //bytes

    printf("Indique o seu nome completo: ");
    fgets(nomeCompleto, 30, stdin);

    // Exibindo as entradas do usuário. 

    printf("Oi %s a sua idade: %d \n", nome, idade);

    printf("O seu nome completo: %s \n", nomeCompleto);

    return 0; 

    // O return 0, serve para duas coisas, a primeira dizer ao compilador que o código foi executado com sucesso
    // a ultima informação é que o código foi finalizado. 
}