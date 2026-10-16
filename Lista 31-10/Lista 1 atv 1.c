#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

float T;
float m [5][5];

for(int i = 0; i < 5; i++) {
    for(int j = 0; j < 5; j++) {
    printf("Digite o numero da linha %d e da coluna %d:\n", i, j);
    scanf("%f", &m [i][j]);
    }
}

for(int i = 0; i < 5; i++) {
        T += m [i][i];
    }

printf("Total da Linha em Diagonal: %.0f",T);
return 0;
}
