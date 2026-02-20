// Arrays Bidimensionais. 

#include <stdio.h> 

int main(){


    // Matriz bidimensional. 

    // Duas Linhas e três colunas. 
    int numeros[2][3] = {
                    {1, 2, 3},
                    {4, 5, 6}
                }; 

    int numerosA[2][3];

    // Preenchendo A linha Zero; 

    numerosA[0][0] = 100; 
    numerosA[0][1] = 200;
    numerosA[0][2] = 210;

    // Preenchendo A segunda Linha; 

    numerosA[1][0] = 450; // Linha 1, segunda linha, coluna 0, primeira coluna. 
    numerosA[1][1] = 455; // Linha 1, segunda linha, coluna 1, segunda coluna. 
    numerosA[1][2] = 500; // Linha 1, segunda linha, coluna 2, terceira coluna. 

    // printf("%d", numerosA[0][0]); // Elementos da primeira linha no índice, primeiro índice. 

    // Imprimindo os elementos por meio de loops aninhados. 

    int indice = 0;
    for (int lista = 0; lista <= 1; lista ++){
        for (int item = 0; item <= 2; item ++){

            printf("Item %d: %d\n", indice,numerosA[lista][item]);

            indice ++;
        }
    }
    return 0;

    // Um exercício interessante é criar vetores e tentar acessar os elementos desses 
    // vetores por meio de laços de repetição for.  
}