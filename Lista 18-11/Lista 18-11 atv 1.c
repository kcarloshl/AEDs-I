#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Entre com um numero: \n");
    scanf("%d", &c);

    a = c/3600;
    b = (c % 3600)/ 60;
    c = (c % 3600)% 60;

    printf("O resultado e %d %d %d", a, b, c);
    return (0);
}
