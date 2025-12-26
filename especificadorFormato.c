// Especificadores de formato. 


#include <stdio.h> 

int main(){

    // O específicador de formato, geralmente precedido pelo símbolo de porcentagem, serve para específicar o tipo de dados que será mostrado, e 
    // também indica o local onde queremos que a váriavel apareça em uma string. 

    // Os específicadores de formato mais utilizados. 

    // %c = character 
    // %s = string (array de caracters)
    // %f = float 
    // %lf = double 
    // %d = int 


    // Os especificadores de formato também são utilizados 

    // %.1 = Precisão de cimal 
    // %1 = Largura miníma de um campo 
    // %- = Alinhamento a esquerda 

    float item1 = 5.75; 
    float item2 = 10.00;
    float item3 = 100.99; 

    // Este sinal de -, faz com que o espaço extra deixe de ser aplicado. 
    printf("Item 1: $%-8.2f\n", item1); // O dois é quantidade de casas decímais que seram exibidas após a vírgula. 
    printf("Item 2: $%8.2f\n", item2); // O oito são a largura de campos máxima até o fim da linha, afim de que 
    printf("Item 3: $%8.2f\n", item3); // haja um espaço esquerda. mas, mantendo o alinhamento pela direito  .

    return 0;
}