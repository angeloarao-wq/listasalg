#include <stdio.h>

void dadosvet(int *v, int tamanho, int valor) 
{
  int *fim = v + tamanho;

  for (int *ptr = v; ptr < fim; ptr++) 
  {
    *ptr = valor;
  }
}

int main() 
{
  int v[5];
  int tamanho = 5;
  int valorPreenchimento = 10;

  dadosvet(v, tamanho, valorPreenchimento);
  printf("Vetor preenchido:\n");
  for (int *ptr = v; ptr < v + tamanho; ptr++) 
  {
    printf("%d ", *ptr);
  }
  printf("\n");

  return 0;

}