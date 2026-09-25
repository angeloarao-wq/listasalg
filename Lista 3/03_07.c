#include <stdio.h>

void swap(int *a, int *b) 
{
  int vartemp = *a;
  *a = *b;
  *b = vartemp;
}

void bs(int *v, int tam) 
{
  if (tam <= 1) return;

  int *fim = v + tam;

  for (int *limite = fim - 1; limite > v; limite--) 
  {
    for (int *ptr = v; ptr < limite; ptr++) 
    {
      int *proximo = ptr + 1;

      if (*ptr > *proximo) 
      {
        swap(ptr, proximo);
      }
    }
  }
}

void imprimirv(int *v, int tamanho) 
{
  int *fim = v + tamanho;
  for (int *p = v; p < fim; p++) 
  {
    printf("%d ", *p);
  }
  printf("\n");
}

int main() 
{
  int dados[] = {7, 2, 5, 1, 6, 3, 4};
  int tamanho = 7;

  printf("Vetor original: ");
  imprimirv(dados, tamanho);
  bs(dados, tamanho);

  printf("Agora ordenado: ");
  imprimirv(dados, tamanho);

  return 0;

}