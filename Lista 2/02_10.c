#include <stdio.h>

int main() 
{
  int a;
  int *b;
  int **c;
  int ***d;

  b = &a;
  c = &b;
  d = &c;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  int dobro = (*b) * 2; 
  int triplo = (**c) * 3;
  int quadruplo = (***d) * 4;

  printf("Valor de a: %d\n", a);
  printf("Dobro: %d\n", dobro);
  printf("Triplo: %d\n", triplo);
  printf("Quadruplo: %d\n", quadruplo);

  return 0;
  
}