#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

int MaterialDourado [3][3];

for(int i = 0; i < 3; i++) {
for(int j =0; j < 3; j++) {
printf("Digite o número da linha %d e da coluna %d:\n", i, j);
scanf("%d",&MaterialDourado [i][j]);
}
}
for(int i = 0; i < 3; i++) {
        printf("\n");
    for(int j = 0; j < 3; j++) {
        printf("%d ",MaterialDourado [i][j]);
    }
}
return 0;
}
