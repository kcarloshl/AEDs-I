#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int v[3];
    int m[3][3];
    int r[3][3];

    for(int i = 0; i < 3; i++)
    {
        printf("Digite os números do vetor %d:", i + 1);
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("Digite os números da Matriz coluna %d linha %d:", i + 1, j + 1);
            scanf("%d", &m[i][j]);
        }
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            r[j][i] = v[j] * m [i][j];
        }
    }

    printf("Os resultados dos números são:\n");
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", r[j][i]);
        }
        printf("\n");
    }

    return 0;
}
