#include <stdio.h>
#include <locale.h>

void troca(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    int k[6];

    for(int i = 0; i < 6; i++)
    {
        printf("Digite os números %d:", i + 1);
        scanf("%d", &k[i]);
    }

    for(int i = 1; i < 6; i += 2)
    {
        troca(&k[i], &k[i - 1]);
    }

    printf("Os Números Alterados:\n");
    for(int i = 0; i < 6; i++)
    {
        printf("%d\n", k[i]);
    }

    return 0;
}
