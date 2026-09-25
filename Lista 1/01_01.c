#include <stdio.h>

float calcv (float raio) 
{
  return (4.0f / 3.0f) * 3.14f * (raio * raio * raio);
}

int main()
{
  float raio, volume;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  if (raio < 0)
  {
    printf("Raio nao pode ser negativo");
  }
  else
  {
    volume = calcv(raio);
    printf("O volume da esfera e: %.2f\n", volume);
  }
  
  return 0;
  
}