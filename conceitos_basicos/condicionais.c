// Condicionais 

#include <stdio.h>

int main(){

    int idade; 

    printf("Indique a sua idade: ");
    scanf("%d", &idade); 

    if (idade >= 18){
        printf("Voce pode tirar a sua carteira de motorista!");

        
    } else if (idade > 10){
        printf("Voce tem mais do que 10 anos");


    } else {
        printf("Voce nao pode tirar a sua carteira de motorista, voce e muito jovem!");
    } 

    return 0;
}