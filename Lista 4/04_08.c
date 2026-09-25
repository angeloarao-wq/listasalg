#include <stdio.h>

struct Data 
{
  int dia;
  int mes;
  int ano;
};

int main() 
{
  struct Data x1, x2;
  int diasm[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  printf("Digite a primeira data em dia, mes e ano: ");
  scanf("%d %d %d", &x1.dia, &x1.mes, &x1.ano);
  printf("Digite a segunda data em dia, mes e ano: ");
  scanf("%d %d %d", &x2.dia, &x2.mes, &x2.ano);

  int totald = 0;

  for (int a = 1; a < x1.ano; a++) 
  {
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) 
    {
      totald1 += 366;
    } 
    else 
    {
      totald1 += 365;
    }
  }

  for (int m = 1; m < x1.mes; m++) 
  {
    if (m == 2 && ((x1.ano % 4 == 0 && x1.ano % 100 != 0) || (x1.ano % 400 == 0))) 
    {
      totald1 += 29;
    } 
    else 
    {
      totald1 += diasm[m - 1];
    }
  }

  totald1 += x1.dia;

  int totald2 = 0;

  for (int a = 1; a < x2.ano; a++) 
  {
    if ((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)) 
    {
      totald2 += 366;
    } 
    else 
    {
      totald2 += 365;
    }
  }

  for (int m = 1; m < x2.mes; m++) 
  {
    if (m == 2 && ((x2.ano % 4 == 0 && x2.ano % 100 != 0) || (x2.ano % 400 == 0))) 
    {
      totald2 += 29;
    } else 
    {
      totald2 += diasm[m - 1];
    }
  }

  totald2 += x2.dia;

  int diferenca;
  if (totald1 > totald2) 
  {
    diferenca = totald1 - totald2;
  } 
  else 
  {
    diferenca = totald2 - totald1;
  }

  printf("\nDecorreram %d dias entre as duas datas inseridas \n", diferenca);

  return 0;

}