#include <stdio.h>

void inverte_vetor(int *vetor, int tamanho) 
{
  for (int *inicio = vetor, *fim = vetor + (tamanho - 1); inicio < fim; inicio++, fim--) 
  {
    int vartemp = *inicio;
    *inicio = *fim;
    *fim = vartemp;
  }
}

void imprimirv(int *vetor, int tamanho) 
{
  int *fim = vetor + tamanho;
  for (int *ptr = vetor; ptr < fim; ptr++) 
  {
    printf("%d ", *ptr);
  }
}

int main()
{
  int numeros[6] = {1, 2, 3, 4, 5, 6};
  int tamanho = 6;

  printf("Vetor original: ");  
  imprimirv(numeros, tamanho);
  inverte_vetor(numeros, tamanho);
  printf("Vetor invertido: ");
  imprimirv(numeros, tamanho);

  return 0;

}