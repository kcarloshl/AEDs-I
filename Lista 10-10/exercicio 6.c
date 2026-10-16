#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

int a [3][4], b [4][3];

for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 4; j++) {
           printf("Digite o numero da linha %d e da coluna %d:\n", i, j);
           scanf("%d", &a [i][j]);
        }
}

for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
        b[i][j] = a[j][i];
    }
}

for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 3; j++) {
        b[i][j] = a[j][i];
    }
}

printf("\nMatriz A:\n");
for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 4; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("\nMatriz B:\n");
for(int i = 0; i < 4; i++)
{
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", b[i][j]);
    }
    printf("\n");
}

return 0;
}


