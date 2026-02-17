// Do While Loop

// O do while loop executa uma instrução e depois verifica se essa condição é verdadeira 
// caso sim executará novamente a instrução. 

#include <stdio.h>

int main(){


    int number = 0;
    int sum = 0; 

    do {

        // Executamos uma instrução, e depois verificamos se 
        // a condição é verdadeira caso sim, executamos a iteração 
        // novamente. 

        printf("Enter a # above: ");
        scanf("%d", &number);

        if (number > 0)
        {
            sum += number; 
        }

        printf("%d\n", sum);

    } while(number > 0);

    return 0; 
}