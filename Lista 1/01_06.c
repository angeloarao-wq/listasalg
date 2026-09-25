#include <stdio.h>

char conceito(float media) 
{
  if (media >= 0.0f && media <= 4.9f) 
  {
    return 'D';
  } 
  else if (media >= 5.0f && media <= 6.9f)
  {
    return 'C';
  } 
  else if (media >= 7.0f && media <= 8.9f) 
  {
    return 'B';
  } 
  else if (media >= 9.0f && media <= 10.0f) 
  {
    return 'A';
  } 
  else 
  {
    return 'I';
  }
}

int main() 
{
  float media;

  printf("Digite a media do aluno: ");
  scanf("%f", &media);

  char resultado = conceito(media);

  if (resultado == 'I') 
  {
    printf("Media invalida.\n");
  } 
  else 
  {
    printf("O conceito do aluno e: %c\n", resultado);
  }

  return 0;
  
}