#include <stdio.h>
#include <string.h>

// typedef se trata de uma forma de definirmos a nossa própria dica de tipo 
// para evitarmos repetições desnecessárias. 


// Outra maneira de criar structs 

// struct Pessoa{

//     char nome[20];
//     int idade;
//     char id[10];

// };


typedef char primeiro_nome[25];

// Podemos fazer um typedef para evitarmos de utilizar uma palavra chave struct 

typedef struct{

    char nome[20];
    int idade; 
    char id[10];
} Pessoa;

int main(){

    // char nome[25] = "Marcos"; 

    // primeiro_nome nome = "Marcos"; 

    // printf("%s", nome);


    // struct Pessoa pessoaA = {"Nathanael", 20, "1044"};

    // printf("Nome: %s\n", pessoaA.nome);
    // printf("Idade: %d\n", pessoaA.idade);
    // printf("ID: %s\n", pessoaA.id);


    Pessoa pessoa1 = {"Mateus", 10, "1200"}; // Assim, evitamos de ter que declara a palavra-chave struct.

    printf("Nome: %s", pessoa1.nome);

    // Desta forma, é possível simular qualquer tipo de estrutura de dados, tanto quanto se-queira. 

    return 0;
}