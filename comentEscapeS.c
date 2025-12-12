
#include <stdio.h>

// Comentários e scape sequences. 

// Comentários são algo comum na maioria das linguagens de programação e servem para escrever algo no 
// código que será ignorado pelo compilador, escrever algo que não será executado. Uma forma de descrever 
// algo que será lido por você ou por outra pessoa. 


// Comentários de uma linha. 


/*Comentários
de
muitas
linhas 
*/


// int main(){

    
//     return 0;
// }


// Escape sequences, ou caracteres de fuga. 
// Os Escape sequences são caracteres especiais, formados por uma barra invertida junto de uma letra ou número 
// que nós utilizamos para específicar ações dentro de sequências de caracteres chamadas de strings. A seguir 
// os princípais escape sequences: 

/* /n = new line 
O /n, chamado de new line, nos permite fazer com que a próxima parte do texto seja impressa na próxima linha
*/ 

// Exemplo: 

// int main(){

//     printf("Parece\nque\nvai\nchover");
//     return 0;
// }


// \t = tab
// \t, se trata de um escape sequence que serve para adicionarmos um espassamento uniforme antes de um 
// texto. 


// int main(){

//     printf("Parace\tque\tira\tchover\n");
//     printf("\n");
//     printf("1\t2\t3\n4\t5\t6\n7\t8\t9");

//     return 0;
// }


// A barra invertida também pode ser usada para que possamos escrever aspas duplas dentro de aspas duplas. 

int main(){

    printf("'Ele gosta de chocolate' - Lucas");
    printf("\n\"Ele gosta de chocolate\" - Lucas");
    printf('\n\' Ele gosta de chocolate\' - Lucas');

    return 0;
}