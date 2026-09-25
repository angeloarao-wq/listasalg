#include <stdio.h>

int calcsomat(int n) 
{
  if (n <= 0) 
  {
    return 0;
  }

  int soma = 0;
  for (int i = 1; i <= n; i++) 
  {
    soma += i;
  }

  return soma;
}

int main() 
{
  int n;

  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);

  if (n <= 0) 
  {
    printf("Digite um numero maior que zero.\n");
  } 
  else 
  {
    int resultado = calcsomat(n);
    printf("O somatorio de 1 ate %d e: %d\n", n, resultado);
  }

  return 0;

}