// Loops aninhados. 

// Loops no interior de outros loops.

#include <stdio.h> 


int main(){



    int linhas = 10; 
    int colunas = 10; 

    for (int numero = 0; numero <= linhas; numero += 1){

        printf("\n");

        // Para cada iteração do loop Externo o loop interno será executado uma vezes, 
        // Então executamos a primeira iteração executamos 10 iterações, por exemplo no loop interno, 
        // Vamos para a segunda iteração executamos 

        for (int numeroB = 0; numeroB <= colunas; numeroB ++){

            printf("*");
        }
    }

    return 0; 
}