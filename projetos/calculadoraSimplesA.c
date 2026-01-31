#include <stdio.h> 

int main(){

    char opcoes;
    float num1;
    float num2;

    double resultado; 

    printf("Indique a sua opcao: ");
    scanf("%c", &opcoes);

    switch (opcoes){

        case '+': 

            printf("Indique o numero 1: ");
            scanf("%f", &num1);

            printf("Indique o numero 2: ");
            scanf("%f", &num2);

            resultado = num1 + num2;

            printf("%.2f + %.2f = %.2lf", num1, num2, resultado);
            break;

        case '-':

            printf("Indique o minuendo: "); 
            scanf("%f", &num1);

            printf("Indique Subtraendo: ");
            scanf("%f", &num2);

            resultado = num1 - num2;

            printf("%.2f - %.2f = %.2lf", num1, num2, resultado);

            break;

        case '*':
            printf("Indique o primeiro fator: ");
            scanf("%f", &num1);

            printf("Indique o segundo fator: ");
            scanf("%f", &num2); 

            printf("%.2f x %.2f = %.2lf", num1, num2, resultado);

            break;

        case '/': 

            printf("Indique o numerador: ");
            scanf("%f", &num1);

            printf("Indique o denominador: ");
            scanf("%f", &num2);

            if (num2 != 0){

                resultado = num1 / num2; 

                printf("%.2f : %.2f = %.2lf", num1, num2, resultado);

            } else {

                printf("O denominador nao pode ser igual a zero.");
            }

            break;


        default: 

            printf("Opcao nao encontrada.");
            // break;

    }


    return 0;
}