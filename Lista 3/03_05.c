#include <stdio.h>

void extrair_estatisticas(int *vetor, int tamanho, int *min, int *max, float *media) 
{
  *min = *vetor;
  *max = *vetor;
  *media = 0;

  for (int i = 0; i < tamanho; i++, vetor++) 
  {
    if (*vetor < *min) *min = *vetor;
    if (*vetor > *max) *max = *vetor;
    *media += *vetor;
  }

  *media /= tamanho;

}

int main() 
{
  int numeros[7] = {1, 2, 3, 4, 5, 6, 7};
  int tamanho = 7;
  int menor, maior;
  float media;

  extrair_estatisticas(numeros, tamanho, &menor, &maior, &media);
  printf("Menor: %d\n", menor);
  printf("Maior: %d\n", maior);
  printf("Media: %.2f\n", media);

  return 0;

}