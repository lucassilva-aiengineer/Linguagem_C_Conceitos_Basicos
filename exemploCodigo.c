// Exemplo de algoritmos. 

#include <stdio.h> 
#include <math.h>

int main(){

    // A área de um círculo é dada por pi * r * r

    // Crie uma variável constante. 

    const double PI = 3.141592; // Uma constante é um tipo de variável que não pode ter o seu valor alterado enquanto o 
                                // código está sendo executado. 

    double raioCirculo; 

    
    printf("Indique o cumprimento do raio: ");
    scanf("%lf", &raioCirculo); 


    double raioCirculoQuadrado = pow(raioCirculo, 2);

    double areaCirculo; 

    areaCirculo = PI * raioCirculoQuadrado;

    printf("Area circulo: %.2lf centimentros quadrados", areaCirculo); 

    return 0;
}