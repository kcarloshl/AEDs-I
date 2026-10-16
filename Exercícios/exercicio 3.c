#include <stdio.h>
#include <locale.h>
int main() {
setlocale(LC_ALL,"portuguese");

float T1, T2, T3;
float m [3][5] = {
{5.7, 3.5, 9.6, 5.3, 7.9},//31,999998
{5.5, 8.0, 1.5, 6.6, 5.3},//26,900002
{4.1, 3.1, 7.2, 8.5, 7.0}//29,900000
};

for(int i = 0; i < 1; i++) {
    for(int j = 0; j < 5; j++) {
        T1 += m [i][j];
    }
}

for(int i = 1; i < 2; i++) {
    for(int j = 0; j < 5; j++) {
        T2 += m [i][j];
    }
}

for(int i = 2; i < 3; i++) {
    for(int j = 0; j < 5; j++) {
        T3 += m [i][j];
    }
}
printf("Total da Linha 1:%f",T1);
printf("\n");
printf("Total da Linha 2:%f",T2);
printf("\n");
printf("Total da Linha 3:%f",T3);
return 0;
}

