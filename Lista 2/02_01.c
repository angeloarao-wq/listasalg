#include <stdio.h>

int main()
{
  int a = 5;
  int b = 10;
  int *pa = &a;
  int *pb = &b;

  printf("Endereco de a: %p\n", pa);
  printf("Endereco de b: %p\n", pb);

  if (pa > pb)
  {
    printf("\n Variavel a tem o maior endereco");
  }
  else if (pb > pa)
  {
    printf("\n Variavel b tem o maior endereco");
  }
  else
  {
    printf("\n Os dois enderecos sao iguais")
  }

  return 0;
  
}