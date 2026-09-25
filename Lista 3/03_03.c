#include <stdio.h>

int main() 
{
  int m[3][3];
  int x = 1;

  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++) 
    {
      m[i][j] = x;
      x++;
    }
  }

  int *ptr = &m[0][0];
  int somadiag = 0;
  int cols = 3;

  for (int i = 0; i < 3; i++) 
  {
    somadiag += *ptr;
    ptr += (cols + 1); 
  }

  printf("Matriz:\n");
  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++) 
    {
      printf("%d", m[i][j]);
    }
    printf("\n");
  }

  printf("\n A soma da diagonal principal e: %d\n", somadiag);

  return 0;
  
}