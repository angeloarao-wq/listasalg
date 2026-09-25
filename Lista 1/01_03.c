#include <stdio.h>

void conversor(int segundos) 
{

  int horas = segundos / 3600;
  int resto = segundos % 3600;
  int minutos = resto / 60;
  int restosegs = resto % 60;

  printf("Tempo equivalente: %02dh %02dm %02ds\n", horas, minutos, restosegs);

}

int main() 
{
  
  int segsent;

  printf("Insira o tempo em segundos: ");
  scanf("%d", &segsent);
  conversor(segsent);

  return 0;

}