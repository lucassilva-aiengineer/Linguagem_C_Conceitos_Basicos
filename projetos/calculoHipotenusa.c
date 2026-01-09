// Um algoritmo que calcula o comprimento da hipotênusa. 

#include <stdio.h>
#include <math.h>


int main(){

        // Declaração, alocamos um espaço na memória que receberá um valor 

        double A;
        double B; 
        double resultado; 

        printf("Indique o comprimento do lado A: ");
        scanf("%lf", &A);   // Inicializamos a variável, atribuimos a ela valor. 

        printf("Indique o comprimento do lado B: ");
        scanf("%lf", &B); 

        resultado = sqrt(A * A + B * B);

        printf("Hipotenusa: %lf", resultado); 

        return 0; 
}