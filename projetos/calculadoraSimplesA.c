#include <stdio.h> 
#include <math.h>

int main(){

    char opcoes;
    float num1;
    float num2;
    float indice; 

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

        case 'r':

            printf("Indique o indice: ");
            scanf("%f", &indice);

            printf("Indique o radicando: ");
            scanf("%f", &num1);

            printf("Indique o expoente do radicando: ");
            scanf("%f", &num2); 

            if (indice % 2 == 0){

                if (pow(num1, num2) < 0){

                    printf("Esta operacao nao pode ser realizada!");
                    printf("O indice par nao aceita um radicando negativo.") ;

                } else { 

                    resultado = pow(num1, (num2 / indice)); 

                    printf("Raiz de %.2f elevado a %.2f no indice %.2f = %.2lf", num1, num2, indice, resultado);
                }

            } else {

                resultado = pow(num1, (num2 / indice)); 
                printf("Raiz de %.2f elevado a %.2f no indice %.2f = %.2lf", num1, num2, indice, resultado); 

            }

            break; 

        default: 
            printf("Opcao nao encontrada.");

    }


    return 0;
}