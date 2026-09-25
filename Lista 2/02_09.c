#include <stdio.h>

void imprimirv(int *v, int tamanho) 
{
  int *fim = v + tamanho; 

  printf("Elementos do vetor: ");
    
  for (int *ptr = v; ptr < fim; ptr++) 
  {
    printf("%d ", *ptr);
  }
}

int main() 
{
  int v[6] = {1, 2, 3, 4, 5, 6};
  int tamanho = 6;

  imprimirv(v, tamanho);

  return 0;

}