// Operadores Logicos 


#include <stdio.h>
#include <stdbool.h> 


int main(){

    // Operadores lógical = && (and) verifica se duas condições são verdareiras. 

    int temperatura = 15; 

    if (temperatura >= 10 && temperatura <= 30){

        printf("Clima Ameno.");

    }   else {

        printf("O clima nao esta ameno.");
    }

    // Operador = || (or) verifica se uma das condições é verdadeira. 

    if (temperatura >= 30 || temperatura <= 0){

        printf("Ou o dia esta muito quente, ou ele esta muito frio.");

    }

    // ! (NOT), reverte o valor lógico de uma condição. 
    
    if(!temperatura > 10){

        printf("A temperatura nao e maior que 10 graus");

    } else {
        printf("A temperatura  e maior que 10.");
    }

    return 0;

}
