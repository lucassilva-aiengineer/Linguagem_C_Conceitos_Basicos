// swicth case

// As estruturas de switch case são muito interessantes, mais recomendades, em alguns casos, que as 
// estruturas de condicional, as swicth case são um tipo de fluxo de controle onde podemos executar um bloco 
// de código, uma instrução, caso uma condição seja verificada. 

#include <stdio.h> 

int main(){

    char media; // declaramos 

    printf("Indique a sua nota: ");
    scanf("%c", &media);   // inicializamos 


    switch(media){
        case 'A':
            printf("Muito Bom!");
            break;

        case 'B':
            printf("Muito Legal!");
            break;

        case 'C':
            printf("Issoa Ai!");
            break; 

        case 'D':
            printf("Estude mais da proxima vez");
            break; 

        default:
            printf("Indique uma nota valida");
    }

    return 0;
}