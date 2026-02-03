#include <stdio.h>

// void parabens(nome, idade){

void parabens(char nome, int idade){ // Parâmetros tipados. 

    printf("Feliz aniversario %s\n", nome);
    printf("A sua idade %d anos", idade);
}

int main(){

    char nome[] = "Mateus"; 
    int idade = 20; 

    parabens(nome, idade);

    return 0;
}