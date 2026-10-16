#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

int a [8][8];

for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(i + j == 8) {
                a[i][j]= ((i * i) + (j * j)) + 2;
            } else if(i + j > 8) {
                a[i][j] = j + 4;
            } else if(i + j < 8) {
                a[i][j] = 3 * i + j;
            }
        }
    }

printf("Matriz a (8x8): ");
for(int i = 0; i < 8; i++) {

    printf("\n");
    for(int j = 0; j < 8; j++) {
        printf("%d ", a[i][j]);
    }
}
return 0;
}

