// Trocando valores em variaveis. 

#include <stdio.h>

int main(){

    char A = 'X';
    char B = 'Y';
    char temp; 

    temp = A; 
    A = B; 
    B = temp;

    printf("%c\n", A);
    printf("%c", B);

    return 0;
}