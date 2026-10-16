#include <stdio.h>

void troca(int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main()
{
    int x = 2, y = 5;

    troca(&x,&y);

    printf("%d %d\n", x, y);
    return (0);
}

