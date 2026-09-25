#include <stdio.h>

void verificacao(float x, float y, float z)
{
  if ((x < y + z) && (y < x + z) && (z < x + y)) 
  {
    if (x == y && y == z) 
    {
      printf("Triangulo equilatero.\n");
    } 
    else if (x == y || x == z || y == z) 
    {
      printf("Triangulo isosceles.\n");
    } 
    else 
    {
      printf("Triangulo escaleno.\n");
    }
  } 
  else 
  {
    printf("Os valores inseridos nao formam um triangulo.\n");
  }
}

int main() 
{
  float x, y, z;

  printf("Digite os tres lados do triangulo: ");
  scanf("%f %f %f", &x, &y, &z);
  verificacao(x, y, z);

  return 0;

}