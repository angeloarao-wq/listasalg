#include <stdio.h>

float calc(int n) 
{
  if (n <= 0) 
  {
    return 1.0f; 
  }

  float s = 1.0f;
  float fat = 1.0f;

  for (int i = 1; i <= n; i++) 
  {
    fat *= i;
    s += 1.0f / fat;
  }

  return s;

}

int main() 
{
  int n;

  printf("Digite um valor inteiro e positivo: ");
  scanf("%d", &n);

  if (n < 0) 
  {
    printf("O valor inserido deve ser positivo.\n");
  } 
  else 
  {
    float resultado = calc(n);
    printf("O valor de S e: %.6f\n", resultado);
  }

  return 0;

}