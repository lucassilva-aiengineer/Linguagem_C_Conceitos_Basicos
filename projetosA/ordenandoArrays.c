// Ordenando Arrays.



#include <stdio.h>

// void sort(int array[], int size){

//     int novo_array[size];

//     for (int i = 0; i < size; i++){

//         int numero = 0; 
//         for (int j = 0; j < size; j++){
//             if (array[i] > numero){

//             numero = array[i];
//         }
//         }


//     }

// } 

// Versão Professor.


// Uma função que ordena. 
void sort(int array[], int size)
{

    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1; j++)
        {
            if(array[j] > array[j + 1]){

                int temp = array[j];

                // O elemento da esquerda passa a ser o elemento da direita. 
                array[j] = array[j + 1];

                //O elemento da direita passa a ser o antigo elemento da esquerda 
                array[j + 1] = temp; 
            }
        }
    } 

    // return array;
}


// Uma função que imprime o vetor. 

void imprimirVetor(int vetor[], int comprimento){

    for (int i = 0; i < comprimento; i++){

        // printf("%d ", vetor[i]);
        printf("%d\n", vetor[i]);

    }
}

int main()
{

    int array[] = {9, 1, 8, 2, 7, 3, 6, 5};
    int size = sizeof(array) / sizeof(array[0]);

    // Reordenando 
    sort(array, size);

    // Imprimindo 

    // int vetorOrdenado = sort(array, size); 

    imprimirVetor(array, size);

    return 0; 
}