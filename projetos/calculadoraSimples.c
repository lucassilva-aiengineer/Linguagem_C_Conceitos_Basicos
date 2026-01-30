// Uma calculadora simples 


// Lembrando 

// Snake Case: variavel_numero 
// Camel Case: variavelNumero 
// Pascal Case: VariavelNumero

#include <stdio.h> //Arquivos padrão da liguagem c, impressão e etc. 
#include <math.h> 

int main(){ 

    char operacao; 
    double num1; 
    double num2; 
    double resultado; 

    int indice;
    double expoenteRadicando; 

    printf("\n Selecione uma opercao (+ - * /): ");
    scanf("%c", &operacao);

    switch (operacao){

        case '+':

            printf("Indique a primeira parcela: ");
            scanf("%lf", &num1);

            printf("Indique a segunda parcela: ");
            scanf("%lf", &num2); 

            resultado = num1 + num2;    // Realizamos a operação. 

            printf("%.2lf + %lf = %lf.", num1, num2, resultado);

            break;

        case '-':

            printf("Indique o subtraendo: ");
            scanf("%lf", &num1);

            printf("Indique o minuendo: "); 
            scanf("%lf", &num2); 

            resultado = num1 - num2; 

            printf("%.2lf - %.2lf = %lf", num1, num2, resultado); 

            break;

        case 'x':

            printf("Indique o primeiro fator: ");
            scanf("%lf", &num1);

            printf("Indique o segundo fator: ");
            scanf("%lf", &num2); 

            resultado = num1 * num2; 

            printf("%.2lf x %.2lf = %.2lf. ", num1, num2, resultado);

            break; 

        case ':':

            printf("Indique o numerador: ");
            scanf("%lf", &num1); 

            printf("Indique o denominador: ");
            scanf("%lf", &num2); 

            if (num2 != 0){

                resultado = num1 / num2;

                printf("%.2lf : %.2lf = %.2lf", num1, num2, resultado);

            } else {

                printf("O denominador de um fracao nunca pode ser 0.");
            }

        case 'r': 

            printf("Indique o indice: ");
            scanf("%d", &indice);

            printf("Indique o radicando: ");
            scanf("%lf", &num2); 

            printf("Indique o espoente do radicando: ");
            scanf("%lf", &expoenteRadicando);

            if (indice % 2 != 0){

                resultado =  pow(num2, (expoenteRadicando /  indice));

                printf("Raiz de indice %.2lf de %.2lf elavado %.2lf = %.2lf.", num1, num2, expoenteRadicando, resultado);

            }  else if ( num1 % 2 == 0 && (num2 ** expoenteRadicando) >= 0){

                printf("Raiz de indice %.2lf de %.2lf elevado a expoente %.2lf = %.2lf.", num1, num2, expoenteRadicando, resultado);

            } else {

                printf("Esta conta nao pode ser feita.");
                printf("Indice %.2lf, par. O radicando %.2lf nao deveria ser negativo.");
            }

            break; 

        default:

            printf("Fim do software.");
            break; 

        }  

        return 0; 
}