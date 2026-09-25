#include <stdio.h>

struct Horario
{
  int hora;
  int minuto;
  int segundo;
};

int main()
{
    struct Horario horarios[5];
    
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d horario em horas, minutos e segundos: ", i + 1 );
        scanf("%d %d %d", &horarios[i].hora, &horarios[i].minuto, &horarios[i].segundo);

    }

    int maiorseg = -1;
    int indicemaiorhora = 0;

    for (int i = 0; i < 5; i++)
    {
        int totalsegs = (horarios[i].hora * 3600) + (horarios[i].minuto * 60) + horarios[i].segundo;

        if(totalsegs > maiorseg)
        {
            maiorseg = totalsegs;
            indicemaiorhora = i;
        }
    }

    printf("A maior hora e: %02d:%02d:%02d", horarios[indicemaiorhora].hora, horarios[indicemaiorhora].minuto, horarios[indicemaiorhora].segundo);

    return 0;

}