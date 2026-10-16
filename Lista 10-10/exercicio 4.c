#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

int a [5][3], maior = 0;

for(int j = 0; j < 3; j++) {
        for(int i = 0; i < 5; i++) {
           printf("Digite o numero da linha %d e da coluna %d:\n", i, j);
           scanf("%d", &a [i][j]);
        }
}

printf("Elementos da 4º linha: ");
for(int j = 0; j < 3; j++) {
        printf("%d ", a [3][j]);
}
printf("\n");

printf("Elementos da 1º coluna: ");
for(int i = 0; i < 5; i++){
        printf("%d ", a [i][0]);
}
printf("\n");

printf("Maior elemento: ");
for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 3; j++) {
        if(a[i][j] > maior) {
            maior = a[i][j];
        }
    }
}
printf("%d ", maior);
printf("\n");
return 0;
}

