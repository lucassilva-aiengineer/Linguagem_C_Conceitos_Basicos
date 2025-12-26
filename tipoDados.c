// Tipo de dados. 


#include <stdio.h>
#include <stdbool.h> 


int main(){

    char letra = 'C';   // Caracter único %c
    char nome[] = "Lucas"; // Strings %s 

    float decimal = 10.5; // Número decimal %f
    double outroDecimal = 3.141559; // Outro tipo de decimal, mais preciso %lf 

    bool boleano = true; // Verdadeiro ou falso, %d 

    char f = 100;        // char também pode armazenar números pequenos entre -128 e 127, %d ou %c 
    unsigned char numero = 200;  // Quando utilizamos a declaração unsigned nós temos utilizamos todo aramazenamento voltado para número positivos. %d ou %c

    // As variáveis são por padrão signed isto siginifica que são capazes de armazenar tanto números positivos quanto negátivos.

    short int numero_inteiro = 32767;  // Os short int armazenam uma quantidade menor de números do que os ints. %d 
    unsigned short int numero_inteiro_positivo; // Armazena apenas uma quantidade pequena de números inteiros positivos. 

    int j = 1000000000; // Armazena números inteiros. %d 
    unsigned int k = 100000000; // Armazena inteiros positivos; 

    long long int l = 1000000000000000; // Armazena uma quantidade maior de inteiros.  %lld 
    unsigned long long int m = 10000000000000000U; // Armazena a maior quantidade possível de inteiros. %llu 

    
    printf("O meu numero float %f\n", decimal);
    printf("O meu numero double %lf\n", outroDecimal);
    printf("A letra e: %c\n", letra);
    printf("Nome: %s\n", nome);
    printf("Valore boleano: %d\n", boleano);

    return 0; 

}