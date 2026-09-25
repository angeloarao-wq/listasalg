#include <stdio.h>

int main() 
{
  int ns[5];

  printf("Digite 5 numeros inteiros:\n");
  for (int i = 0; i < 5; i++) 
  {
    printf("Posicao [%d]: ", i);
    scanf("%d", &ns[i]);
  }

  printf("\nEnderecos de memoria das posicoes com valores pares:\n");
  int par = 0;

  for (int i = 0; i < 5; i++) 
  {
    if (ns[i] % 2 == 0) 
    {
      printf("Valor %d (posicao %d) no endereco: %p\n", ns[i], i, (void*)&ns[i]);
      par = 1;
    }
  }

  if (!par) 
  {
    printf("Nenhum valor par foi digitado.\n");
  }

  return 0;
  
}