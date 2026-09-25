#include <stdio.h>

int main()
{
  int a = 30;
  int b = 50;
  int *pa = &a;
  int *pb = &b;

  printf("Valor de a: %d | Endereco de a: %p\n", a, pa);
  printf("Valor de b: %d | Endereco de b: %p\n", b, pb);

  if (pa > pb)
  {
    printf("\n O endereco de maior conteudo e: %p\n", *pa);
  }
  else if (pb > pa)
  {
    printf("\n O endereco de maior conteudo e: %p\n", *pb);
  }
  else
  {
    printf("\n Os dois enderecos sao iguais")
  }

  return 0;

}