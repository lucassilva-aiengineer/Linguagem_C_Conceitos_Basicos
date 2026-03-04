#include <stdio.h>
#include <string.h>


struct Student{

    char name[12];
    float gpa;

}; 

int main(){

    struct Student aluno1 = {"Marcos", 9};
    struct Student aluno2 = {"Mateus", 10};
    struct Student aluno3 = {"Joao", 10};
    struct Student aluno4 = {"Lucas", 10};


    // Um array de alunos, de structs. 

    struct Student alunos[] = {aluno1, aluno2, aluno3, aluno4}; 

    // Eterando os estudantes. 

    for (int i = 0; i < sizeof(alunos) / sizeof(alunos[0]); i++){

        printf("======================\n Nome: %s\n Media gloabal: %f\n", alunos[i].name, alunos[i].gpa);

        }

    return 0;
}