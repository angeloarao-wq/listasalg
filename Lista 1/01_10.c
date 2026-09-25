#include <stdio.h>

float calc(float n1, float n2, char simb) 
{
  switch (simb) 
  {
    case '+':
    return n1 + n2;
    case '-':
    return n1 - n2;
    case '*':
    return n1 * n2;
    case '/':
    if (n2 == 0) 
    {
      printf("Nao pode haver divisoes por zero\n");
      return 0.0f;
    }
    return n1 / n2;
    default:
    printf("Simbolo invalido\n");
    return 0.0f;
  }
}

int main() 
{
  float n1, n2;
  char operacao;

  printf("Digite o primeiro numero: ");
  scanf("%f", &n1);
  printf("Digite um simbolo para a operacao: ");
  scanf(" %c", &operacao);
  printf("Digite o segundo numero: ");
  scanf("%f", &n2);

  float resultado = calc(n1, n2, operacao);

  printf("\nResultado: %.2f %c %.2f = %.2f\n", n1, operacao, n2, resultado);

  return 0;

}