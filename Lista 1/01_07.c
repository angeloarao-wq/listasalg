#include <stdio.h>

float calcularMediaValores(void) 
{
  float valor;
  float soma = 0.0f;
  int cont = 0;

  printf("Digite valores positivos. Caso esteja satisfeito com os valores digitados, digite um numero negativo ou zero para parar:\n");

  while (1)
  {
    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor <= 0) 
    {
      break;
    }

    soma += valor;
    cont++;
  }

  if (cont == 0) 
  {
    return 0.0f;
  }

  return soma / cont;
}

int main() 
{
  float media = calcularMediaValores();

  if (media > 0) 
  {
    printf("\nA media aritmetica dos valores digitados e: %.2f\n", media);
  } 
  else 
  {
    printf("\nNao foi digitado um valor positivo valido.\n");
  }

  return 0;
  
}