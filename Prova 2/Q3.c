// Considere a classe Pilha que foi apresentada em sala de aula. Considere que esta estrutura está
// trabalhando com 4 elementos do tipo inteiros. Crie em alto nível um algoritimo que faça a operação:
// Média aritmética

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MaxTam 4

typedef int Apontador;
typedef struct
{
    int cod;
} TipoItem;

typedef struct
{
    TipoItem Item[MaxTam];
    Apontador Topo;
} TipoPilha;

TipoPilha Pilha;
TipoItem x;

void FPVazia(TipoPilha *Pilha)
{
    Pilha->Topo = 0;
}

int Vazia(TipoPilha Pilha)
{
    return(Pilha.Topo == 0);
}

void Empilhar(TipoItem x, TipoPilha *Pilha)
{
    if (Pilha->Topo == MaxTam)
    {
        printf("\nERRO: PILHA ALTA DEMAIS!\n");
    }
    else
    {
        Pilha->Item[Pilha->Topo] = x;
        Pilha->Topo += 1;
    }
}

void Imprimir(TipoPilha Pilha)
{
    int aux;
    if(Vazia(Pilha))
    {
        printf(" Pilha Esta Vazia.\n");
    }
    else
    {
        for (aux = Pilha.Topo -1; aux >= 0; aux--)
        {
            printf("Cod %d: %d\n", aux+1, Pilha.Item[aux].cod);
        }
    }
}

void Media(TipoPilha Pilha)
{
    if (Vazia(Pilha))
    {
        printf("A Pilha Esta Vazia.\n");
        return;
    }
    
    int soma = 0;
    float media;

    for (int i = 0; i < Pilha.Topo; i++)
    {
        int idade = Pilha.Item[i].cod;
        soma += idade;
    }

    media = (float) soma/Pilha.Topo;
    
    printf("Media: %.2f\n", media);
}

int main()
{
    setlocale(LC_ALL, "");
    FPVazia(&Pilha);

    int q = 0;

    printf("Digite ate 4 numeros inteiros:\n");

    while (q < MaxTam)
    {
        scanf("%d", &x.cod);
        Empilhar(x, &Pilha);
        q++;
    }
    printf("\n\n");
    Media(Pilha);
    
    return(0);
}