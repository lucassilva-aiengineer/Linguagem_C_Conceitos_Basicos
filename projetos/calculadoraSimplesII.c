#include <stdio.h>
#include <math.h>

int main(){

    int opcao; 
    int indice; 

    double numA; 
    double numB;

    double resultado;  

    printf("Para Adicao Digite 1\n");
    printf("Para Subtracao Digite 2\n");
    printf("Para Multiplicacao 3\n");
    printf("Para Divisao Digite 4\n");

    printf("Indique a sua opcao: ");
    scanf("%d", &opcao);

    // printf("Opcao: %d", opcoes); 

    if (opcao == 1){

        printf("Indique a primeira parcela: ");
        scanf("%lf", &numA); 

        printf("Indique a segunda parcela: ");
        scanf("%lf", &numB);

        resultado = numA + numB;

        printf("%.2lf + %.2lf = %.2lf", numA, numB, resultado); 

    } else if (opcao == 2){

        // printf("pass");

        printf("Indique o Minuendo: ");
        scanf("%lf", &numA); 

        printf("Indique o Subtraendo: ");
        scanf("%lf", &numB); 

        // printf("")

        resultado = numA - numB; 

        printf("%.2lf - %.2lf = %.2lf", numA, numB, resultado);

    } else if (opcao == 3){

        printf("Indique o primeiro fator: ");
        scanf("%lf", &numA); 

        printf("Indique o segundo fator: ");
        scanf("%lf", &numB);

        resultado = numA * numB; 

        printf("%.2lf x %.2lf = %.2lf", numA, numB, resultado);

    } else if (opcao == 4){

        printf("Indique o numerador: ");
        scanf("%lf", &numA); 

        printf("Indique o Denominador: ");
        scanf("%lf", &numB);

        if (numB != 0){

            resultado = numA / numB; 

            printf("%.2lf : %.2lf = %.2lf", numA, numB, resultado); 

        } else { 

            printf("O denominador nao pode ser zero!");

        }

    } else if (opcao == 5){

        printf("Indique o indice: ");
        scanf("%d", &indice); 

        if (indice % 2 == 0){

            printf("Indique o radicando: ");
            scanf("%lf", &num1);

            printf("Indique o expoente do radicando: "); 
            scanf("%lf", &num2); 

            if (pow(num1, num2) < 0){

                printf("Quando o indice par; radicando deve ser maior que zero.");

            } else {
                resultado = pow(num1, (num2 / (double)indice)); 

                printf("A raiz de %.2lf elevado a %.2lf no indice %d: ", num1, num2, indice); 

            } 
        } else { 

            printf(""); 

        }

    } else { 
        printf("Opcao nao identificada!");
    }

    return 0;
}