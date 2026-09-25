#include <stdio.h>

int conversor(int a, int m, int d) 
{
  return (a * 365) + (m * 30) + d;
}

int main() 
{
  int a, m, d, totald;

  printf("Digite a idade):\n");
  printf("Anos: ");
  scanf("%d", &a);
  printf("Meses: ");
  scanf("%d", &m);
  printf("Dias: ");
  scanf("%d", &d);

  totald = conversor(a, m, d);

  printf("\nA idade em dias e: %d dias\n", totald);

  return 0;

}