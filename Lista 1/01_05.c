#include <stdio.h>

int perfeito(int numero) 
{
  if (numero <= 1)
  {
    return 0;
  }

  int somadiv = 0;

  for (int i = 1; i <= numero / 2; i++)
  {
    if (numero % i == 0)
    {
      somadiv += i;
    }
  }

  return (somadiv == numero) ? 1 : 0;

}

int main() 
{
  int valor;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &valor);

  if (perfeito(valor))
  {
    printf("O numero %d e perfeito\n", valor);
  }
  else
  {
    printf("O numero %d nao e perfeito\n", valor);
  }

  return 0;
  
}