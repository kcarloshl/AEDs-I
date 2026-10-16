// Faça um procedimento que divide uma fila em duas outras, de forma que os valores das
// posições pares desta fila fiquem na fila 1 e os das posições impares fiquem na fila 2.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MaxTam 5

typedef int Apontador;

typedef struct
{
    int Item[MaxTam];
    Apontador Frente;
    Apontador Tras;
} TipoFila;

TipoFila FilaPar;
TipoFila FilaImpar;

void FFVazia(TipoFila *Fila)
{
    Fila->Frente = 1;
    Fila->Tras = Fila->Frente;
}

int Vazia(TipoFila Fila)
{
    return (Fila.Frente == Fila.Tras);
}

void Enfileira(int x, TipoFila *Fila)
{
    if (Fila->Tras % MaxTam + 1 == Fila->Frente)
    {
        printf("\nA Fila Esta Cheia\n");
    }
    else
    {
        Fila->Item[Fila->Tras - 1] = x;
        Fila->Tras = Fila->Tras % MaxTam + 1;
    }
}

void Imprime(TipoFila Fila)
{
    int aux;
    if (Vazia(Fila))
    {
        printf("A Fila Esta Vazia.\n");
    }
    else
    {
        for (aux = Fila.Frente - 1; aux <= (Fila.Tras - 2); aux++)
        {
            printf("Cod: %d\n\n", Fila.Item[aux]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    FFVazia(&FilaPar);
    FFVazia(&FilaImpar);

    int n, q = 0;

    printf("Digite ate 5 numeros inteiros:\n");
    printf("Digite 0 para parar.\n");

    while (q < MaxTam)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }
        
        if (q % 2 == 0)
        {
            Enfileira(n, &FilaPar);
        }
        else
        {
            Enfileira(n, &FilaImpar);
        }
        q++;
    }

    system("cls");
    printf("Fila de Posicao Par:\n");
    Imprime(FilaPar);
    printf("\n\n");
    printf("FIla de Posicao Impar:\n");
    Imprime(FilaImpar);

    return(0);
}