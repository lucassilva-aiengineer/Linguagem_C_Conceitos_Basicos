#include <stdio.h> 

// Funções são blocos de códigos reutilizáveis 
// que são utilizados sempre que invocados. 

void parabens(){ // Tipada como void pois nao retorna nada. 

    printf("Parabens para voce!\n");
    printf("Parabens para voce!\n");
    printf("Parabens para voce!\n");

}
int main(){

    parabens(); 
    parabens();
    parabens();

    return 0;
}