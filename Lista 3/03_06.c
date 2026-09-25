#include <stdio.h>

int* buscasubv(int *v, int tamv, int *sub, int tamsubv) 
{
  if (tamsubv > tamv || tamsubv <= 0 || tamv <= 0) 
  {
    return NULL;
  }

  int *lim = v + (tamv - tamsubv);

  for (int *pv = v; pv <= lim; pv++) 
  {
    int *p1 = pv;
    int *p2 = sub;
    int *fimsubv = sub + tamsubv;

    while (p2 < fimsubv && *p1 == *p2) 
    {
      p1++;
      p2++;
    }

    if (p2 == fimsubv) 
    {
      return pv;
    }
  }

  return NULL;

}

int main() 
{
  int vm[] = {1, 2, 3, 4, 5, 6, 7};
  int tamv = 7;

  int subvetor[] = {3, 4, 5};
  int tamsubv = 3;

  printf("Vetor maior: ");
  
  for (int *p = vm; p < vm + tamv; p++) 
  {
    printf("%d ", *p);
  }
  
  printf("\nSubvetor a buscar: ");
  
  for (int *p = subvetor; p < subvetor + tamsubv; p++) 
  {
    printf("%d ", *p);
  }

  int *x = buscasubv(vm, tamv, subvetor, tamsubv);

  if (x != NULL) 
  {
    printf("Primeiro elemento : %d\n", *x);
    printf("Endereco de memoria: %p\n", (void *)x);
        
    int indice = x - vm;
    printf("Comeca no indice %d\n", indice);
  } 
  else 
  {
    printf("Subvetor nao foi encontrado no vetor principal\n");
  }

  return 0;

}