// Struct 

// Os structs são uma forma de relacionar diferente tipos de dados 
// a um mesmo endereço de memória. 


#include <stdio.h>
#include <string.h>


struct Colaborador {

    char nome[20];
    double salario;
};

int main(){

    struct Colaborador colaborador1; 

    // A função strcpy é necessária para atribuir strings as "istâncias".
    strcpy(colaborador1.nome, "Marcos");
    colaborador1.salario = 50000;

    // Se  trata de algo bem parecido a programação orientada a objetos associadas a linguagens como python e Java.
    printf("Nome colaborador: %s", colaborador1.nome);
    printf("\nSalario: %.2lf.", colaborador1.salario);

    return 0;
}