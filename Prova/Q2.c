// Chama se de quadrado mágico um arranjo, na forma de um quadrado, de N×N
// números inteiros tal que todas as linhas, colunas e diagonais têm a mesma soma.
// Por exemplo, o quadrado abaixo:
//                                2 7 6
//                                9 5 1
//                                4 3 8
// É um quadrado mágico de soma 15, pois todas as linhas (2+7+6 = 15, 9+5+1 = 15
// e 4+3+8 = 15), colunas (2 + 9 + 4 = 15, 7+5+3=15 e6+1+8 = 15) e diagonais
// (2+5+815e6+5+4= 15) têm a mesma soma (15).
//
// TAREFA:
// Escreva um programa que, dado um quadrado 3X3, determine se ele é magico ou
// não e qual a soma dele (caso seja mágico).
//
// Entrada:
// A entrada contém um único conjunto de testes, que deve ser lido do dispositivo de 
// entrada padrão (normalmente o teclado). A primeira linha deve conter um inteiro que 
// será o elemento (0,0) do quadrado. A segunda linha deve conter o elemento (0,1) do
// quadrado, e assim por diante. Considere que os inteiros dentro do quadrado são todos
// maiores que 0 (zero) e menores que 1.000.
//
// Saída:
// Seu programa deve imprimir na saída padrão, uma única linha com um inteiro 
// representando a soma do quadrado mágico ou -1 caso o quadrado não seja mágico.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int qm[3][3];
    int sl1 = 0, sl2 = 0, sl3 = 0;
    int sc1 = 0, sc2 = 0, sc3 = 0;
    int d1 = 0, d2 = 0;
    int erro = -1;

    for (int i = 0; i < 3; i++) // linha
    {
        for (int j = 0; j < 3; j++) // coluna
        {
            scanf("%d", &qm[i][j]);
        }
    }

    for (int j = 0; j < 3; j++) // soma linha 1
    {
        sl1 = sl1 + qm[0][j];
    }

    for (int j = 0; j < 3; j++) // soma linha 2
    {
        sl2 = sl2 + qm[1][j];
    }

    for (int j = 0; j < 3; j++) // soma linha 3
    {
        sl3 = sl3 + qm[2][j];
    }

    for (int i = 0; i < 3; i++) // soma coluna 1
    {
        sc1 = sc1 + qm[i][0];
    }

    for (int i = 0; i < 3; i++) // soma coluna 2
    {
        sc2 = sc2 + qm[i][1];
    }

    for (int i = 0; i < 3; i++) // soma coluna 3
    {
        sc3 = sc3 + qm[i][2];
    }

    for (int i = 0; i < 3; i++) // soma diagonal 1
    {
        d1 = d1 + qm[i][i];
    }

    d2 = qm[0][2] + qm[1][1] + qm[2][0]; // soma diagonal 2

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf(" %d", qm[i][j]);
        }
        printf("\n\n");
    }

    if (sl1 == sl2 && sl1 == sl3 && sc1 == sc2 && sc1 == sc3 && d1 == d2 && d1 == sc1 && d1 == sl1)
    {
        printf("A soma do quadrado magico e %d\n", sl1);
    }
    else
    {
        printf("%d\n", erro);
    }

    return 0;
}
