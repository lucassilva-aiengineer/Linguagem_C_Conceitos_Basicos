#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0)); 

    int numero1 = (rand() % 6 ) + 1; // Retornando um inteiro entre seis e um. 
    int numero2 = (rand() % 6 ) + 1; // Retornando um inteiro entre seis e um. 
    int numero3 = (rand() % 6 ) + 1; // Retornando um inteiro entre seis e um. 

    printf("Numero: %d\n", numero1);
    printf("Numero: %d\n", numero2);
    printf("Numero: %d\n", numero3);


    return 0; 
}