#include <stdio.h>

int encontrarMaximo(int numeroA, int numeroB){

    if (numeroA >= numeroB){

        return numeroA;

    } else {

        return numeroB;
    }

}

int encontrarMaximoA(int numeroA, int numeroB){

    return (numeroA > numeroB) ? numeroA : numeroB; // Se numero A maior que o número B, retornar o número a caso contrário retornar o número B.
}
int main(){

    // Operadores ternários 
    // ternary operator são uma forma mais curta de trabalharmos com estruturas de condicionáis. 

    // int maximo = encontrarMaximo(3, 4);
    // printf("%d", maximo);

    int resultado = encontrarMaximoA(10, 5);    
    printf("%d", resultado); 

    return 0; 
}


// (condicao) ? valor if true: valor if false. 

