#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MaxTam 12

typedef int Apontador;

typedef struct
{
int Item[MaxTam];
Apontador Topo;
} TipoPilha;

TipoPilha PilhaPar, PilhaImpar;

void FPVazia (TipoPilha *Pilha)
{
    Pilha->Topo = 0;
}

int Vazia (TipoPilha Pilha)
{
    return(Pilha.Topo==0);
}

void Empilhar (int x, TipoPilha *Pilha)
{
    if(Pilha->Topo == MaxTam)
    {
        printf("\nERRO: PILHA ALTA DEMAIS!\n");
    }
    else
    {
        Pilha->Item[Pilha->Topo] = x;
        Pilha->Topo += 1;
    }
}

void Imprimir (TipoPilha Pilha)
{
    int aux;
    if(Vazia(Pilha))
    {
        printf("A Pilha Está Vazia.\n");
    }
    else
    {
        for(aux = Pilha.Topo - 1; aux >= 0; aux--)
        {
            printf("Cod %d: %d\n", aux+1, Pilha.Item[aux]);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    FPVazia(&PilhaPar);
    FPVazia(&PilhaImpar);

    int n, q = 0;

    printf("Digite ate 12 numeros inteiros:\n");
    printf("Digite 0 para parar.\n");

    while(q < MaxTam)
    {
        scanf("%d", &n);
        if(n == 0)
        {
            break;
        }

        if(n % 2 == 0)
        {
            Empilhar( n, &PilhaPar);
        }
        else
        {
            Empilhar( n, &PilhaImpar);
        }
        q++;
    }

    system("cls");
    printf("Pilha Par:\n");
    Imprimir(PilhaPar);
    printf("\n\n");
    printf("Pilha Impar:\n");
    Imprimir(PilhaImpar);

    return(0);
}
