// Defina uma estrutura que irá representar 3 bandas de música. Essa estrutura
// deve ter o nome da banda, que tipo de música ela toca, o número de integrantes
// e em que posição do ranking essa banda está dentre as suas 3 bandas favoritas.
// Após criar e preencher, peça ao usuário que entre com um número e 1 até 3. Em
// seguida, seu programa deve exibir informações da banda cuja posição no seu
// ranking é a que foi solicitada pelo usuário.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int nome[3];
    int tipo[3];
    int num[3];
    int pos[3];
} Banda;

int main()
{
    int bdj;
    Banda banda;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite o codigo(nome) da banda:\n");
        scanf("%d", &banda.nome[i]);
        printf("Digite o tipo da banda:\n");
        printf("1 para Funk.\n");
        printf("2 para Rock.\n");
        printf("3 para Pop.\n");
        scanf("%d", &banda.tipo[i]);
        printf("Digite o numero de integrantes:\n");
        scanf("%d", &banda.num[i]);
        printf("Digite a posicao:\n");
        scanf("%d", &banda.pos[i]);
    }
    printf("\n");

    printf("Digite a posicao que deseja saber:\n");
    scanf("%d", &bdj);
    if (bdj > 3)
    {
        printf("ERRO: O raking so contem as 3 primeiras colocadas.\n");
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            if (bdj == banda.pos[i])
            {
                printf("A banda de ");

                if (banda.tipo[i] == 1)
                {
                    printf("Funk");
                }
                else if (banda.tipo[i] == 2)
                {
                    printf("Rock");
                }
                else if (banda.tipo[i] == 3)
                {
                    printf("Pop");
                }

                printf(", %d", banda.nome[i]);
                printf(" esta em  %d", banda.pos[i]);
                printf(" lugar no ranking.");
            }
        }
    }

    return 0;
}