#include <stdio.h>


// Variáveis 
// Uma vavriável em c se trata de uma espaço alocado na memória, reservado para um tipo específico 
// de dados que poderá ser atribuido a ela. Quando uma variável é criada o que acontece é que o algoritmo 
// diz ao compilador que ele deve criar um espaço na memória para rezervar um tipo de dado especifico, de pois 
// de alocarmos um espaço na memória nós geralmente atribuímos uma valor a variável. Quando chamamos uma variável 
//  nós não chamamos aquela variável, mas sim aquilo que ela representa, está associado a ela. 



// Na línguagem c a criação de uma varável está dividida em duas etapas, delaração, quando pedimos ao compilador que 
// aloque um espaço na memória que irá receber um tipo específico de dados, e inicialização quando atribuímos um valor 
// a este espaço alocado na memória. Estas duas partes podem ser feitas em conjunto ou separadas.

int main(){

    int numero; // declaração, alocação de espaço na memória para armazenamento de alguma variável de um tipo de dados 
    // espcíficados. 
    numero = 10; // inicialização, atribuição de valor ao espaço alocado na memória. 

    int numeroA = 10; // Declaração e inicialização feitas juntas. 


    // Alguns exemplo de  tipos de declaração de variáveis com tipo de dados diferentes. 

    int idade = 20;  // número inteiro 
    float nota = 10.0;  // número decimal. 
    char media = 'A'; // Caracteres únicos. 
    char nome[] = "Marcos"; // Uma String, mais precisamente uma cadeia de caracteres. 


    // Impreção de variáveis. 
    // Para imprimirmos variáveis nós utilizamos os chamados especificadores de formato. 
    // que se tratam de caractes especiais que servem para sinalizar o tipo de dado da variável que 
    // está sendo impressa e o local onde quero que ela seja impressa na string. 

    printf("O nome daquele rapaz: %s\n", nome); // especificador para strings 
    printf("A idade daquele joven: %d anos", idade); // especificador para números inteiros 
    printf("\nA nota daquele rapaz: %c", media); // especificador para caracteres.
    printf("\nA minha nota e %f", nota); // especificador para numeros float, decimais. 
    return 0;
}
