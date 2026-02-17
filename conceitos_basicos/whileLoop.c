#include <stdio.h> 
#include <string.h> 

// Loop while 



// void validarEntrada(){

//     int interacoes = 0;
//     while (iteracoes <= 100){

//         char nome[10];

//         printf("Indique o seu primeiro nome: ");
//         scanf("%s", &nome);

//         iteracoes += 1; 

//         int comprimentoString = strlen(nome); 

//         if (comprimentoString  == 0){

//             printf("Indique um nome valido!");

//         } else {

//             printf("texto aceito!");
//             printf("%s", nome);

//             // break;

//         }
    
//     }

    // return void;
// }
int main(){

    // O laço de repetição while itera, executa um bloco de código, uma quantidade indeterminada de vezes
    // enquanto uma condição de parada não for alcançada. 

    // int alvo = 0;
    // while (alvo <= 100){

    //     printf("Bom dia!\n");

    //     alvo += 1;
    //     break; 
    // }

    // validarEntrada();

    char nome[25];

    printf("Indique o seu nome: ");
    fgets(nome, 25, stdin);
    nome[strlen(nome) - 1] = '\0'; // Indicamos que o último caracter será /0


    while(strlen(nome) == 0)
    {

        printf("O seu nome deve ter mais de 1 caracter!\n");
            
        printf("Indique o seu nome: ");
        fgets(nome, 25, stdin);
        nome[strlen(nome) - 1] = '\0'; // Indicamos que o último caracter será /0


    }

    printf("O seu nome: %s", nome);

        
    return 0; 
}