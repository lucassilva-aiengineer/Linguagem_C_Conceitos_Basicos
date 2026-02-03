#include <stdio.h> 

// Uma função prototype é uma declaração sem corpo que vem antes 
// da função princípal e serve para que possamos utilizar uma função na main()
// construindo a função após a declaração da função main(). 

void saudacoes(char[], int);

int main(){

    char nome[] = "Mateus"; 
    int idade = 25; 

    saudacoes(nome, idade);

    return 0;
}

void saudacoes(char nome[], int idade){

    printf("Saudacao %s", nome);
    printf("\nVoce possui %d!", idade); 

}