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

  for (int i = 0; i < 5; i++) 
  {
    printf("Nome: ");
    scanf(" %[^\n]", atletas[i].nome);
    printf("Esporte: ");
    scanf(" %[^\n]", atletas[i].esporte);
    printf("Idade: ");
    scanf("%d", &atletas[i].idade);
    printf("Altura em metros: ");
    scanf("%f", &atletas[i].altura);
    printf("\n");
  }

  int indicealtura = 0;
  int indiceidade = 0;

  for (int i = 1; i < 5; i++) 
  {
    if (atletas[i].altura > atletas[indicealtura].altura) 
    {
      indicealtura = i;
    }
    if (atletas[i].idade > atletas[indiceidade].idade) 
    {
      indiceidade = i;
    }
  }

  printf("=== RESULTADOS ===\n");
  printf("Atleta mais alto:  %s (Altura: %.2fm - Esporte: %s)\n", atletas[indicealtura].nome, atletas[indicealtura].altura, atletas[indicealtura].esporte);
  printf("Atleta mais velho: %s (Idade: %d anos - Esporte: %s)\n", atletas[indiceidade].nome, atletas[indiceidade].idade, atletas[indiceidade].esporte);

  return 0;
  
}