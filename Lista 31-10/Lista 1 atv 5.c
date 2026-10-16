#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int a[6][6], soma = 0;

for(int i = 0; i < 6; i++) {
    for(int j = 0; j < 6; j++) {
    printf("Digite o numero da linha %d e da coluna %d:\n", i, j);
    scanf("%d", &a[i][j]);
    }
}
printf("\nMatriz A (6x6):\n");
for(int i = 0; i < 6; i++)
{
    for(int j = 0; j < 6; j++)
    {
        printf("%d ", a[i][j]);

        if(i >= j)
        {
            soma += a[i][j];
        }
    }
    printf("\n");
}
printf("\n");
printf("A soma dos elementos da diagonal principal e abaixo: %d\n", soma);
return 0;
}
