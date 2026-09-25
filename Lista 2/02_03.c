#include <stdio.h>

int main()
{
  float v[10];

  printf("Digite os valores do vetor");
    
  for (int i = 0; i < 10; i++)
  {
  printf("\nPosicao %d\n", i);
  scanf("%f", &v[i]);
  }

  for (int i = 0; i < 10; i++)
  {
    printf("Posicao [%d] | Valor: %.2f | Endereco: %p\n", i, v[i], *&v[i]);
  }

    return 0;
}