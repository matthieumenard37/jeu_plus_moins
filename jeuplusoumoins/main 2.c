#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MIN = 0;
    int nombreMystere = 0, nombreEntre = 0, nombreDeCoups = 0, continuerPartie = 1, nombreMax = 0, choixMenu = 0;
    srand(time(NULL));
    nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;

    do
    {
        nombreDeCoups = 0;
        nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;
        do
        {
            printf("\n-------  MENU  -------\n\n");
            printf("Choisissez votre niveau :\n\n");
            printf("Niveau 1 : 0 - 100\n");
            printf("Niveau 2 : 0 - 1000\n");
            printf("Niveau 3 : 0 - 10000\n");
            scanf("%d", &choixMenu);
            if (choixMenu == 1)
                {
                nombreMax = 100;
                nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;
                printf("Vous avez choisi le Niveau 1. Pas trop difficile ! ;)");
                }
            else if (choixMenu == 2)
               {
                nombreMax = 1000;
                nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;
                printf("Vous avez choisi le Niveau 2. Bonne chance !");
                }
            else if (choixMenu == 3)
                {
                nombreMax = 10000;
                nombreMystere = (rand() % (nombreMax - MIN + 1)) + MIN;
                printf("Vous avez choisi le Niveau 3. BON COURAGE !!!");
                }

        }while (choixMenu < 1 || choixMenu > 3);
        do
        {
            printf("\n\nQuel est le nombre mystere ? ");
            scanf("%d", &nombreEntre);
            nombreDeCoups++;

                if (nombreMystere > nombreEntre)
                    printf("\nC'est PLUS !\n\n");
                else if (nombreMystere < nombreEntre)
                    printf("\nC'est MOINS !\n\n");
                else
                    printf("\nFELICITATIONS !!!\nVous avez trouve le nombre mystere en %d coups !\nBien joue :D\n\n", nombreDeCoups);

        } while (nombreEntre != nombreMystere);
        printf("\nVoulez-vous refaire une partie ?");
        printf("\nOui tapez 1");
        printf("\nNon tapez 2\n");
        scanf("%d", &continuerPartie);

    } while (continuerPartie == 1);

    return 0;

}
