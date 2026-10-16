#include <stdio.h>

int soma(int j, int h)
{
    int s;
    s = j + h;
    return (s);
}

int main()
{
    int A, B, C;

    printf("Defina os valores de A e B:\n");
    scanf("%d %d", &A, &B);

    C = soma(A,B);

    printf("A soma desses valores é:%d \n", C);
}
