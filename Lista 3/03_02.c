#include <stdio.h>

int *buscar(int *v, int tamanho, int x) 
{
  int *fim = v + tamanho;

  for (int *ptr = v; ptr < fim; ptr++) 
  {
    if (*ptr == x) 
    {
      return ptr;
    }
  }

  return NULL;

}

int main() 
{
  int v[6] = {1, 2, 3, 4, 5, 6};
  int tamanho = 6;
  int x;

  printf("Vetor: ");
  for (int *ptr = v; ptr < v + tamanho; ptr++) 
  {
    printf("%d ", *ptr);
  }
  printf("\n\n");

  printf("Digite o numero que quer buscar: ");
  scanf("%d", &x);

  int *resultado = buscar(v, tamanho, x);

  if (resultado != NULL) 
  {
    printf("Valor: %d\n", *resultado);
    printf("Endereco de memoria: %p\n", (void *)resultado);
        
    int indice = resultado - v;

    printf("Posicao no vetor: %d\n", indice);

  } 
  else 
  {
    printf("\nO elemento %d nao foi encontrado no vetor\n", x);
  }

  return 0;

}