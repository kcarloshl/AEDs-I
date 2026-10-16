#include <stdio.h>
#include <locale.h>
int main(){
setlocale(LC_ALL,"portuguese");

int m[2][3];

for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 3; j++) {
        printf("Digite o número da linha %d e coluna %d:\n", i, j);
        scanf("%d",&m[i][j]);
    }
}

for(int i = 0; i < 2; i++) {
        printf("\n");
    for(int j = 0; j < 3; j++) {
        printf("%d ",m[i][j]);
        }
}

return 0;
}
