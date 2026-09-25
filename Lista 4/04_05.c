#include <stdio.h>

struct Data 
{
  int dia;
  int mes;
  int ano;
};

struct Pessoa 
{
  char nome[100];
  struct Data nascimento;
};

int main() 
{
  struct Pessoa pessoas[6];

  for (int i = 0; i < 6; i++) 
  {
    printf("--- Dados da %d Pessoa \n", i + 1);
    printf("Nome: ");
    scanf(" %[^\n]", pessoas[i].nome);
    printf("Data de nascimento em dia, mes e ano: ");
    scanf("%d %d %d", &pessoas[i].nascimento.dia, &pessoas[i].nascimento.mes, &pessoas[i].nascimento.ano);
    printf("\n");
  }
    
  int datainicial = (pessoas[0].nascimento.ano * 10000) + (pessoas[0].nascimento.mes * 100) + pessoas[0].nascimento.dia;

  int menordata = datainicial;
  int maiordata = datainicial;

  int indicemv = 0;
  int indicemn = 0;

  for (int i = 1; i < 6; i++) 
  {
    int dataatual = (pessoas[i].nascimento.ano * 10000) + (pessoas[i].nascimento.mes * 100) + pessoas[i].nascimento.dia;

    if (dataatual < menordata) 
    {
      menordata = dataatual;
      indicemv = i;
    }
    if (dataatual > maiordata) 
    {
      maiordata = dataatual;
      indicemn = i;
    }
  }

  printf("Pessoa mais velha: %s (%02d/%02d/%04d)\n", pessoas[indicemv].nome,pessoas[indicemv].nascimento.dia,pessoas[indicemv].nascimento.mes,pessoas[indicemv].nascimento.ano);

  printf("Pessoa mais nova:  %s (%02d/%02d/%04d)\n", pessoas[indicemn].nome,pessoas[indicemn].nascimento.dia,pessoas[indicemn].nascimento.mes,pessoas[indicemn].nascimento.ano);

  return 0;

}