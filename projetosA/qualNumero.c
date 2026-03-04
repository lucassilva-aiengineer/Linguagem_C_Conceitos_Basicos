#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int MIN = 1; // As constantes não podem ser alteradas em tempo de execução. 
    const int MAX = 100; 

    int guess;
    int guesses; 

    int answer; 



    srand(time(0));  // Uma semente baseada no tempo atual. 

    answer = (rand() % MAX) + MIN; 

    // printf("%d", answer); 

    do {

        printf(); // Isso pode ser utilizado em situações onde precisamos de uma entrada, e de executar uma iteração, antes de acessarmos o loop.
    }
    return 0;
}