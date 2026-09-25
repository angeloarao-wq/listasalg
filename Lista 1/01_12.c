#include <stdio.h>

void calc(int n) 
{
  if (n <= 0) 
  {
    printf("Insira um valor maior que zero\n");
    return;
  }

  for (int i = 1; i <= n; i++) 
  {
    printf("%d x %d = %d\n", i, n, i * n);
  }
}

int main() 
{
  int n;

  printf("Digite um valor:");
  scanf("%d", &n);
  printf("\nTabuada de 1 ate %d:\n", n);
  calc(n);

  return 0;

}