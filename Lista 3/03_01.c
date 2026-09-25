#include <stdio.h>

void calcular_esfera(float raio, float *area, float *volume) 
{
  *area = 4.0f * 3.14f * (raio * raio);
  *volume = (4.0f / 3.0f) * 3.14f * (raio * raio * raio);
}

int main() 
{
  float raio;
  float arearesultado, volumeresultado;

  printf("Digite o raio da esfera: ");
  scanf("%f", &raio);

  calcular_esfera(raio, &arearesultado, &volumeresultado);

  printf("o raio e: %.2f\n", raio);
  printf("A area da superficie e: %.2f\n", arearesultado);
  printf("O volume e: %.2f\n", volumeresultado);

  return 0;

}