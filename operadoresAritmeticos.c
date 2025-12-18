#include <stdio.h>

// Operadores são caracteres que indicam uma 
// operação matmática aritmética que será executada. 

int main(){

    // Operadores aritméticos. 

    // + (adição) 
    // - (subtração)
    // * (multiplicação)
    // / (divisão)
    // % (modulus)
    // ++ (incremantação)
    // -- (decrementação) 

    int valorA = 5; 
    int valorB = 2; 

    int adicao = valorA + valorB;
    int subtracao = valorA - valorB; 

    int multiplicacao = valorA * valorB; 

    // É necessário exercer uma atenção maior quando se trata de divisão de números. 
    float divisao = valorA/ (float) valorB; // Transformamos a variável "valorB" em um float

    // Modulos. 
    // Este operador nos devolve, ou retorna, o resto de qualquer divisão. 

    int divisao2 = valorA % valorB;

    // Incrementando ou decrementando valores numéricos. 

    valorA ++;
    
    // printf("Incrementando: %d\n", valorA);


    valorA --;
    valorA --;

    // printf("Decrementando: %d\n", valorA);

    // printf("%d + %d = %d\n", adicao);
    // printf("%d - %d = %d\n", subtracao);
    // printf("%d x %d = %d\n", multiplicacao);
    // printf("%d : %d = %.2f\n", valorA, valorB, divisao);

    // printf("%d modulo %d = %d", valorA, valorB, divisao2);
    // printf("");
    // return 0; 

// Operadores de atribuição.

// Operadores de atribuição, são uma forma de acessar incrementar ou decrementar valores 
// reatribuindo a uma variável o próprio valor mais uma parte, é uma forma de utilizar o valor 
// da variável atual com argumento em alguma operação aritmética, e reatribuir o resultado desta operação 
// a primeira variável.

    int numero_a = 10; 
    
    // numero_a = numero_a + 1; 
    // numero_a += 1

    //numero_a = numero_a - 2; 
    // numero_a -= 2; 

    // numero_a = numero_a * 2; 
    // numero_a *= 2; 

    // numero_a = numero_a / 2;
    // numero_a /= 2; 
    
    // numero_a = numero_a % 2; 
    // numero_a %= 2;

    printf("resultado: %d", numero_a);

    return 0;

}


