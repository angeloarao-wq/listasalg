#include <stdio.h>

struct Aluno
{
  int matricula;
  char nome[100];
  float n1;
  float n2;
  float n3;
};

int main()
{
    struct Aluno alunos[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Numero da matricula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome do aluno: ");
        scanf("%[^\n]", alunos[i].nome);

        printf("Digite as 3 notas do aluno: ");
        scanf("%f %f %f", alunos[i].n1, alunos[i].n2, alunos[i].n3);

    }

    float maiormedia = -1.0;
    int indice = 0;

    for (int i = 0; i < 5; i++)
    {
        float media = (alunos[i].n1 + alunos[i].n2 + alunos[i].n3) / 3.0;
        if (media > maiormedia)
        {
            maiormedia = media;
            indice = i;
        }
    }

    printf("Nome: %s\n", alunos[indice].nome);
    printf("Notas: %.2f | %.2f | %.2f", alunos[indice].n1, alunos[indice].n2, alunos[indice].n3);
    printf("Media geral: %.2f", maiormedia);

    return 0;

}