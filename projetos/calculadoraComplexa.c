#include <stdio.h> 
#include <math.h>


double adicao(double parcelaA,  double parcelaB){

    double resultado = parcelaA + parcelaB; 

    return resultado;
}

double subtracao(double minuendo, double subtraendo){

    double diferenca = minuendo - subtraendo; 

    return diferenca; 

}

double multiplicacao(double fatorA, double fatorB){

    double produto = fatorA * fatorB; 

    return produto; 
}

double divisao(double numerador, double denominador){

    double quociente = numerador / denominador; 

    return quociente;
}

// No caso esta função só vai verificar se a potencicao pode ser feita. 
double potenciacao(double base, double expoente){

    if (base != 0 || expoente != 0){

        double resultado = pow(base, expoente);

        return resultado; 

    } else {

        printf("Esta operacao nao pode ser realizada!");

        return 0.0; 
    } 
    
}


int main(){


    int opcao; 

    printf("\n\n\nBem vindo a supercalculadora!");

    while (opcao != 0){ 

        // As iterações serão realizadas enquanto a opção indicada não for 0. 


        printf("\nPara Adicao digite 1\n");
        printf("Para Subtracao digite 2\n");
        printf("Para Multiplicacao digite 3\n");
        printf("Para Divisao digite 4\n");
        printf("Para Potenciacao digite 5\n");
        printf("Para Radiciacao digite 6\n");
        printf("\n");
        printf("Para Sair digite 0\n\n");

        printf("Indique a sua opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1)
        {

            double parcelaA;
            double parcelaB;

            printf("Indique a primeiro parcela: ");
            scanf("%lf", &parcelaA);

            printf("Indique a segunda parcela: ");
            scanf("%lf", &parcelaB); 

            printf("Resultado: \n\n");
            printf("\n%.2lf + %.2lf = %.2lf", parcelaA, parcelaB, 
            adicao(parcelaA, parcelaB));

        } else if (opcao == 2)
        { 

            double minuendo;
            double subtraendo;

            printf("\n\nSubtracao selecionada...\n\n");
            printf("Indique o minuendo: ");
            scanf("%lf", &minuendo);

            printf("Indique o subtraendo: ");
            scanf("%lf", &subtraendo);

            printf("\nResultado: \n\n");
            printf("\n%.2lf - %.2lf = %.2lf", minuendo, subtraendo, 
            subtracao(minuendo, subtraendo));
            

        } else if (opcao == 3)
        {

            double fatorA;
            double fatorB;

            printf("\n\nMultiplicacao Selecionada...\n\n");

            printf("Indique o primeiro fator: "); 
            scanf("%lf", &fatorA); 

            printf("Indique o segundo fator: ");
            scanf("%lf", &fatorB); 

            printf("\n%lf x %lf = %lf\n", fatorA, fatorB, multiplicacao(fatorA, fatorB)); 

        } else if (opcao == 4){

            double numerador; 
            double denominador; 

            printf("Indique o numerador: "); 
            scanf("%lf", &numerador); 

            printf("Indique o denominador: ");
            scanf("%lf", &denominador);

            printf("\n\nResultado: \n\n");

            // printf("")

            if (denominador != 0){ 

                printf("\nResultado: \n\n");
                printf("\n%lf : %lf = %lf\n", numerador, denominador, divisao(numerador, denominador));

            } else {

                printf("\nO denominador de um divisao jamais podera ser 0\n");
            }

        } else if (opcao == 5)
        {

            double base; 
            double expoente; 

            printf("\n\n Potenciacao Selecionada...\n\n");

            printf("Indique o valor da base: ");
            scanf("%lf", &base); 

            printf("Indique o valor do expoente: ");
            scanf("%lf", &expoente); 

            printf("\n\nResultado: \n\n");
            printf("\n\n%lf elevado a %lf = %lf\n\n", base, expoente, potenciacao(base, expoente));

        }  

        else {

            printf("Opcao invalida!\n\n");
            printf("Tentando novamente...\n\n\n");
        }

    }

    return 0;

}