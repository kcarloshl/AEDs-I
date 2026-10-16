#include <stdio.h>
#include <locale.h>

int main(){
setlocale(LC_ALL,"portuguese");

float m [3][3];

for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++) {
        printf("Digite o número da linha %d e da coluna %d:\n", i, j);
        scanf("%f", &m [i] [j]);//%f serve para float
    }
}

for(int i = 0; i < 3; i++) {
    printf("\n");
    for(int j = 0; j < 3; j++) {
        m[i][j]= 2 * m [i][j];
        printf("%.0f ", m [i] [j]);//%f.n serve para definir casas decimais
    }
}
return 0;
}
