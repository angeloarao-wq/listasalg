#include <stdio.h>

int main()
{
  int v[5];
  int *pv = v;  

  printf("Digite 5 numeros inteiros:\n");
    
  for (int i = 0; i < 5; i++)
  {
    printf("Elemento %d: ", i + 1);
    scanf("%d", pv + i);          
  }

  printf("\nO dobro de cada valor e:\n");
    
  for (int i = 0; i < 5; i++)
  {
    int og = *(pv + i);
    int dobro = og * 2;
    printf("Elemento %d | Valor original: %d | Dobro: %d\n", i + 1, og, dobro);   
  }
    
  return 0;
  
}