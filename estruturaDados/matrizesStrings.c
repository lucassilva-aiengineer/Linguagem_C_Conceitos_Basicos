// Matrizes. 

#include <stdio.h> 


char stringArrays(){


    char cars[][10] = {"Mustang", "Corvette", "Camaro"};


    int comprimentoString = sizeof(cars) / sizeof(cars[0]); 

    printf("\n\n========= Minha Garagem ==========\n\n");
    for (int i = 0; i < comprimentoString; i++){

        printf("Carro %d: %s\n", (i + 1), cars[i]);

    }

    return cars; 
}

int main(){

    // char stringA[] = stringsArrays();
    // printf("O meu carro favorito: %s", stringA[0]);

    stringArrays();

    return 0;
}