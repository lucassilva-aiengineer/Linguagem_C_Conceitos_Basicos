#include <stdio.h>

int main(){

    double numero; 

    printf("Indique um numero: ");
    scanf("%lf", &numero);

    if (numero >= 0){
        printf("O numero e maior que ou igula a 2");

    } else {

        printf("O numero e menor ou igual a 2 e diferente de 0.");
    }

    return 0;
}