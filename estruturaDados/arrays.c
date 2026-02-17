// Arrays
// As conhecidas listas os bem falados vetores, para aqueles que gostam de álgebra linear. 


// Arrays são estruturas de dados que permitem o armazenamento conjunto de vários valores de um mesmo 
// tipo de dados. 


#include <stdio.h> 


// Imprimindo uma lista 

void imprimirVetor(){

    double precos[] = {10.5, 20.50, 10.4};  

    for (int indice = 0; indice <= 2; indice ++){

        printf("Nmero: %.2lf\n", precos[indice]);
    }
}



void vetorArray(){

    double numeros[] = {10.5, 20.5, 30.10, 40.10}; 



    // String 

    char nome[] = "Mateus"; 


    double primeiroValor = numeros[0];

    // printf("%.2lf", numeros[0]); 

    printf("Primeiro Valor: %.2lf\n", primeiroValor);


    int numerosInteiros[10]; 

    numerosInteiros[0] = 100;

    printf("%d", numerosInteiros[0]);

}

// Calculando o tamanho do vetor e imprimindo o vetor. 
// Lembre-se os vetores possuem os mesmos tipos de dados. 

double lenVetor(double vetor[]){

    
    // Nós dividimos o tamanho do vetor em bytes pela quantidade de bytes que possui o primeiro elemento, 
    // assim, como todos os elementos em um vetor possuem o mesmo tipo de dados, e cada um dos elementos são 
    // iguais em comprimento de bytes. 

    double tamanhoVetor = sizeof(vetor) / sizeof(vetor[0]); 

    return tamanhoVetor;

}

int main(){


    // imprimirVetor(); 

    double vetorA[] = {10.1, 15.4, 30.10, 20.0, 40.1, 50.3};

    printf("Comprimento Vetor A: %lf", lenVetor(vetorA));

    return 0;
}