#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int a[8][8] = {
{2, 1, 1, 1, 1, 1, 1, 1},
{2, 2, 1, 1, 1, 1, 1, 1},
{2, 2, 2, 1, 1, 1, 1, 1},
{2, 2, 2, 2, 1, 1, 1, 1},
{2, 2, 2, 2, 2, 1, 1, 1},
{2, 2, 2, 2, 2, 2, 1, 1},
{2, 2, 2, 2, 2, 2, 2, 1},
{2, 2, 2, 2, 2, 2, 2, 2}
},soma = 0;

printf("Matriz A (8x8):\n");
for(int i = 0; i < 8; i++) {
    for(int j = 0; j < 8; j++) {
    printf("%d ", a[i][j]);
    if(i < j)
        {
        soma += a[i][j];
        }
    }
    printf("\n");
}
printf("\n");
printf("Soma  dos elementos acima da diagonal primária: %d\n", soma);

return 0;
}
