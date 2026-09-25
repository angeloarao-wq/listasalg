#include <stdio.h>
#include <string.h>

int main ()
{
    struct info
    {
        char nome[100];
        char endereco[100];
        
    }

    struct info info1;

    strcpy(info1.nome, "Angelo Pacchioni");
    strcpy(info1.endereco, "Rua Dr Munir Thome, Colinos");

    printf("Nome: %s\n", info1.nome);
    printf("Endereco: %s\n", info1.endereco);

    return 0;

}
