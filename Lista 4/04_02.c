#include <stdio.h>
#include <math.h>

struct Ponto
{
float x;
float y;
};

struct Retangulo
{
    struct Ponto superioresq;
    struct Ponto inferiordir; 
};

int main ()
{

  struct Retangulo ret;
  
  printf("Digite as coordenadas do ponto superior esquerdo: ");
  scanf("%f %f", &ret.superioresq.x, &ret.superioresq.y);

  printf("Digite as coordenadas do ponto inferior direito: ");
  scanf("%f %f", &ret.inferiordir.x, &ret.inferiordir.y);

  float base = ret.inferiordir.x - ret.superioresq.x;
  float altura = ret.superioresq.y - ret.inferiordir.y;

  float area = base * altura;
  float perimetro = 2 * (base + altura);


  float diag = sqrt((base * base) + (altura + altura));

  printf("Area do retangulo: %.2f\n", area);
  printf("Perimetro do retangulo: %.2f\n", perimetro);
  printf("Comprimento da diagonal: %,2f\n", diag);

  return 0;

}
