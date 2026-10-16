#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int a[2][2], b[2][2], c[2][2];

for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
    printf("Digite o numero da linha %d e da coluna %d da matriz A\n", i, j);
    scanf("%d", &a[i][j]);
    }
}

for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
    printf("Digite o numero da linha %d e da coluna %d da matriz B\n", i, j);
    scanf("%d", &b[i][j]);
    c[i][j] = a[i][j] * b[i][j];
    }
}

printf("\nMatriz A:\n");
for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 2; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("\nMatriz B:\n");
for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 2; j++)
    {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}
printf("\nMatriz C:\n");
for(int i = 0; i < 2; i++)
{
    for(int j = 0; j < 2; j++)
    {
        printf("%d ", c[i][j]);
    }
    printf("\n");
}
return 0;
}

