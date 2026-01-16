#include <stdio.h>
#include <ctype.h>     // Um arquivo que inclui ferramentas para trabalharmos com a linguagem C. 


// Criando um conversor de temperaturas. 

int main(){

    char opcao;
    float temperatura;


    printf("Indique a sua opcao: ");
    scanf("%c", &opcao); 

    opcao = toupper(opcao); // Transformando a letra em maiúscula. 

    if (opcao == 'C'){
        printf("Voce escolheu temperatura em graus celsius (C) !"); 

        printf("Indique a temperatura: ");
        scanf("%f", &temperatura); 

        float temperaturaAjustada; 

        temperaturaAjustada = (temperatura - 32) * (1.8);

        printf("F %f = C %.2f", temperatura, temperaturaAjustada);

    } else if (opcao == 'F') {

        printf("Voce escolheu a temperatura em Fahrenheit!"); 

    } else {

        printf("Opcao nao prevista para o algorithmo!");
    }


    return 0;
}