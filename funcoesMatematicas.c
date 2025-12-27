#include <stdio.h>
#include <math.h> // Este é o arquivo que incluem algumas funções matemáticas importantes

int main(){

    double A = sqrt(9); // A Raís quadrada de 9
    double B = pow(2, 4); // Dois elevado a quatro.  

    int C = round(3.14); // Arredondando o 3.14, suponho que para o inteiro mais próximo. 
    int D = ceil(3.14); // Assim a o 3.14 é sempre arredondado para cima, para inteiro maior inteiro mais próximo. 
    int E = floor(3.14); // Sempre arredonda para o menor inteiro mais próximo. 

    double F = fabs(-100); // Retorna o módulo dos números inteiros, se o número é negativo retorna o oposto do valor  
                            // caso contrário retorna o próprio valor. 
    double G = log(3); // Logarítmo
    double H = sin(45); // Seno  
    double I = cos(45); // Coseno 
    double J = tan(45); // Tangente 


    printf("\nresultado %.2lf", A); // O específicador nos indica o tipo de dados da variável e o local onde a variável será impressa. 

    return 0; // Este return 0 indica que o código terminou e que ele foi executado com sucesso. 
}