#include <stdio.h>

int main()
{
  float v[3][3];

  printf("Digite os valores da matriz");
    
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      printf("\nPosicao [%d][%d]\n", i, j);
      scanf("%f", &v[i][j]);
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for(int j = 0; j < 3; j++)
    {
        printf("Posicao [%d] | Valor: %.2f | Endereco: %p\n", i, j, v[i][j], *&v[i][j]);
    }
  }
    
  return 0;
  
}