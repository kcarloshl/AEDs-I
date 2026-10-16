#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "portuguese");
int a[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
    },
    somacoluna = 0, produtodalinha = 1, somatotal = 0, media = 0;

for(int i = 0; i < 3; i++) {
        somacoluna += a[i][0];
}
for(int j = 0; j < 3; j++) {
    produtodalinha *= a[0][j];
}
for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++){
        somatotal += a[i][j];
        media = somatotal / 9;
    }
}
printf("Matriz:\n");
for(int i = 0; i < 3; i++)
{
    for(int j = 0; j < 3; j++)
    {
        printf("%d ", a[i][j]);
    }
    printf("\n");
}
printf("Soma dos elementos da 1º coluna:%d\n", somacoluna);
printf("Produto dos elementos da 1º linha: %d\n", produtodalinha);
printf("Soma de todos os elementos da matriz:%d\n", somatotal);
printf("Media dos elementos da matriz: %d\n", media);

return 0;
}
