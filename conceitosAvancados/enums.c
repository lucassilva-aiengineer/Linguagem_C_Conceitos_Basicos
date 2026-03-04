#include <stdio.h>

// Enums
// Enumns são números nomeados 


void queDiaHoje(){

    // if (hoje == 6 || hoje == 7){

    //     printf("Final de semana!");

    // } else {

    //     printf("Meio da semana!");
    // }

}

// Enumns são úteis na melhoria da legibilídade. 

enum Day{Segunda = 1, Terca = 2, Quarta = 3, Quinta = 4, Sexta = 5, Sabado = 6, Domingo = 7};

int main(){

    enum Day hoje = Domingo;

    // printf("%d", hoje);

    // if (hoje == 6 || hoje == 7){

    //     printf("Final de semana!");

    // } else {

    //     printf("Meio da semana!");
    // }


    if (hoje == Sabado || hoje == Domingo){

        printf("Final de semana!");

    } else {

        printf("Meio da semana!");
    }

    return 0;
}