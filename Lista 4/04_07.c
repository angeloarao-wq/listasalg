#include <stdio.h>

struct Atleta 
{
  char nome[100];
  char esporte[50];
  int idade;
  float altura;
};

int main() 
{
  struct Atleta atletas[5];
  struct Atleta vartemp;

  for (int i = 0; i < 5; i++) 
  {
    printf("Nome: ");
    scanf(" %[^\n]", atletas[i].nome);
    printf("Esporte: ");
    scanf(" %[^\n]", atletas[i].esporte);
    printf("Idade: ");
    scanf("%d", &atletas[i].idade);
    printf("Altura (em metros): ");
    scanf("%f", &atletas[i].altura);
    printf("\n");
  }


  for (int i = 0; i < 5 - 1; i++) 
  {
    for (int j = 0; j < 5 - 1 - i; j++) 
    {
      if (atletas[j + 1].idade > atletas[j].idade) 
      {
        vartemp = atletas[j];
        atletas[j] = atletas[j + 1];
        atletas[j + 1] = vartemp;
      }
    }
  }

  for (int i = 0; i < 5; i++) 
  {
    printf("%dº - %s | Idade: %d anos | Esporte: %s | Altura: %.2fm\n", i + 1, atletas[i].nome, atletas[i].idade, atletas[i].esporte, atletas[i].altura);
  }

  return 0;
  
}