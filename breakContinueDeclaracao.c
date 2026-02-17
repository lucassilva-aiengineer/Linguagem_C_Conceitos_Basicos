// Declaração break and continue. 

// A declaração continue ignora um momento específico da iteração.


#include <stdio.h>

int main(){

    for (int i= 0; i <= 10; i ++)
    {

        if (i == 5){

            continue;
        }
        printf("Numero: %d\n", i); 


        // Paramos completamente o loop em um momento específico. 

        if (i == 8){

            break; 
        }

    }
    return 0;
}
