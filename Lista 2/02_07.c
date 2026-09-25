#include <stdio.h>

int temsub(char *string, char *sstring) 
{
  if (*sstring == '\0') 
  {
    return 1;
  }

  for (char *pstring = string; *pstring != '\0'; pstring++) 
  {
    char *p1 = pstring;
    char *p2 = sstring;

    while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) 
    {
      p1++; 
      p2++; 
    }

    if (*p2 == '\0') 
    {
      return 1; 
    }
  }

    return 0;

}

int main() 
{
  char txt[100];
  char busca[100];

  printf("Digite a string principal: ");
  scanf(" %[^\n]", txt);

  printf("Digite a string a ser buscada: ");
  scanf(" %[^\n]", busca);

  if (temsub(txt, busca)) 
  {
    printf("\nA segunda string foi encontrada na primeira string\n");
  } 
  else 
  {
    printf("\nA segunda string nao foi encontrada na primeira string\n");
  }

  return 0;

}