#include <stdio.h>
#include <math.h>

void calcb(float a, float b, float c)
{
  if (a == 0)
  {
    printf("Nao e uma equacao de segundo grau");
    return;
  }

  float delta = (b * b) - (4 * a * c);

  if (delta < 0)
  {
    printf("A equacao nao tem raizes");
  }
  else if (delta == 0)
  {
    float x = -b / (2 * a);
    printf("Possui 1 raiz: x = %.2f\n", x);
  }
  else
  {
    float x1 = (-b + sqrtf(delta))/ (2 * a);
    float x2 = (-b - sqrtf(delta))/ (2 * a);
    printf("Possui 2 raizes: \n");
    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f\n", x2);
  }
}

int main ()
{
  float a, b, c;

  printf("Digite valores para a, b e c:");
  scanf("%f %f %f", &a, &b, &c);
  calcb(a, b, c);
  
  return 0;

}