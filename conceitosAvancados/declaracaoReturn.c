#include <stdio.h> 

// A declaração de retorno. 

double adicionar(double numeroA, double numeroB){

    // double resultado = numeroA + numeroB; 

    // return resultado; 

    return numeroA + numeroB; 

}

int main(){

    double resultado = adicionar(10, 5);

    printf("Resultado: %.2lf", resultado); 

    return 0;
}