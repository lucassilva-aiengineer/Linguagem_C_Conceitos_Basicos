// Constantes em C são valores fixados que não podem ser alterados durante 
// a execução do código. 

#include <stdio.h>

int main(){

    // float pi = 314159; // Sem declararmos a palavra chave const, a variável poderá ter
    // o seu valor alterado durante a execução do código. 

    const float PI = 3.14159; // É uma boa prática declarar variáveis constantes com letras maiúsculas.  

    // pi = 2; 

    printf("%f", pi);
    return 0;
}