#include <stdio.h>
#include <string.h>

struct Aluno {
    int numMat;
    char nome[30];
    char sexo;
    int idade;
};

int main() {
    struct Aluno aluno1;
    aluno1.numMat = 100;
    strcpy(aluno1.nome, "joão");
    aluno1.sexo = 'M';
    aluno1.idade = 19;

    printf("Numero de matricula: %d\n", aluno1.numMat);
    printf("Nome: %s\n", aluno1.nome);
    printf("Sexo: %c\n", aluno1.sexo);
    printf("Idade: %d\n", aluno1.idade);

    return 0;
}
