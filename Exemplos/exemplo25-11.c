#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define InicioArranjo 1
#define MaxTam 5

typedef int Apontador;

typedef struct
{
    int cod;
    int idade;
} TipoItem;

typedef struct
{
    TipoItem Item[MaxTam];
    Apontador Primeiro;
    Apontador Ultimo;
} TipoLista;

TipoLista Lista;
TipoItem x;
Apontador pos;

void FLVazia (TipoLista *Lista)
{
    Lista->Primeiro=InicioArranjo;
    Lista->Ultimo=Lista->Primeiro;
}

int Vazia(TipoLista Lista)
{
    return (Lista.Primeiro== Lista.Ultimo);
}

void Insere (TipoItem x, TipoLista *Lista)
{
    if (Lista->Ultimo > MaxTam)
    {
        printf("\n A Lista está Cheia\n");
    }
    else
    {
        Lista->Item[Lista->Ultimo -1] = x;
        Lista->Ultimo=Lista->Ultimo +1;
    }
}

void Imprime (TipoLista Lista)
{
    int aux;
    for(aux=Lista.Primeiro-1; aux<=(Lista.Ultimo-2); aux++)
    {
        printf("Cod: %d\nIdade: %d\n\n\n", Lista.Item[aux].cod, Lista.Item[aux].idade);
    }
}

void Retira (Apontador pos, TipoLista *Lista, TipoItem *x)
{
    int aux;
    if (Vazia (*Lista) || pos>=Lista->Ultimo)
    {
        printf("ERRO: Posição não existe\n");
    }
    else
    {
        *x =  Lista->Item[pos-1];
        printf("O elemento retirado foi o de código %d\n", x->cod);
        Lista->Ultimo=Lista->Ultimo -1;
        for(aux = pos; aux < Lista->Ultimo; aux = aux +1)
        {
            Lista->Item[aux -1] = Lista->Item[aux];
        }
    }
}

void RetiraPos (Apontador pos, TipoLista *Lista, TipoItem *x)
{
    int aux;
    if(Vazia (*Lista) || pos>=Lista->Ultimo -1)
    {
        printf("ERRO: Posição não existe\n");
    }
    else
    {
        *x =  Lista->Item[pos];
        printf("O elemento retirado foi o de código %d\n", x->cod);
        Lista->Ultimo=Lista->Ultimo -1;
        for(aux = pos; aux < Lista->Ultimo; aux = aux +1)
        {
            Lista->Item[aux] = Lista->Item[aux +1];
        }
    }
}

void Procura (TipoItem x, TipoLista Lista)
{
    int aux;
    for(aux = Lista.Primeiro -1; aux < Lista.Ultimo; aux++)
    {
        if(Lista.Item[aux].cod == x.cod)
        {
            printf("Elemento encontrado:\nCod: %d\nIdade: %d\n", Lista.Item[aux].cod, Lista.Item[aux].idade);
            return;
        }
    }
    printf("Elemento não encontrado\n");
}

void InserePrimeira (TipoItem x, TipoLista *Lista)
{
    int aux;
    if (Lista->Ultimo > MaxTam)
    {
        printf("A Lista está Cheia\n");
    }
    else
    {
        for (aux = Lista->Ultimo - 1; aux >= Lista->Primeiro - 1; aux--)
        {
            Lista->Item[aux + 1] = Lista->Item[aux];
        }
        Lista->Item[Lista->Primeiro - 1] = x;
        Lista->Ultimo++;
    }
}

void InserePosicao (TipoItem x, Apontador pos, TipoLista *Lista)
{

    int aux;
    if (Lista->Ultimo > MaxTam)
    {
        printf("A Lista está Cheia\n");
    }
    else
    {
        for (aux = Lista->Ultimo - 1; aux >= pos; aux--)
        {
            Lista->Item[aux + 1] = Lista->Item[aux];
        }
        Lista->Item[pos] = x;
        Lista->Ultimo++;
    }
}

int main()
{
    int opcao, resposta;
    setlocale(LC_ALL, ""); //aceitar acentos
    FLVazia(&Lista);

    do
    {
        printf("----------------------------MENU----------------------------\n\n");
        printf("Digite a opcão desejada:\n");
        printf("0 - Sair.\n");
        printf("1 - Esvaziar Lista.\n");
        printf("2 - Verificar se a lista está vazia.\n");
        printf("3 - Inserir elemento na lista.\n");
        printf("4 - Imprimir os elementos da lista.\n");
        printf("5 - Retirar elementos da lista antes da posição determinada.\n");
        printf("6 - Retirar elementos da lista.\n");
        printf("7 - Pesquisar elemento na lista.\n");
        printf("8 - Inserir na primeira posição da lista.\n");
        printf("9 - Inserir um elemento em qualquer lugar da lista.\n");
        printf("------------------------------------------------------------\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            {
                printf("PROGRAMA ENCERRADO!\n");
                break;
            }
        case 1:
            {
                FLVazia (&Lista);
                printf("\nLISTA VAZIA\n");
                break;
            }
        case 2:
            {
                resposta=Vazia(Lista);
                if(resposta == 1)
                {
                    printf("\n Lista está vazia\n");
                }
                else
                {
                    printf("\n Lista não está vazia\n");
                }
                break;
            }
        case 3:
            {
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                printf("Digite a idade\n");
                scanf("%d", &x.idade);
                Insere(x, &Lista);
                break;
            }
        case 4:
            {
                Imprime(Lista);
                break;
            }
        case 5:
            {
                printf("Digite a posição\n");
                scanf("%d", &pos);
                Retira(pos, &Lista, &x);
                break;
            }
        case 6:
            {
                printf("Digite a posição\n");
                scanf("%d", &pos);
                RetiraPos(pos,&Lista, &x);
                break;
            }
        case 7:
            {
                printf("Digite o elemento\n");
                scanf("%d", &x.cod);
                Procura(x, Lista);
                break;
            }
        case 8:
            {
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                printf("Digite a idade\n");
                scanf("%d", &x.idade);
                InserePrimeira(x, &Lista);
                break;
            }
        case 9:
            {
                printf("Digite a posição\n");
                scanf("%d", &pos);
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                printf("Digite a idade\n");
                scanf("%d", &x.idade);
                InserePosicao(x, pos - 1, &Lista);
                break;
            }
            default: printf("\n\nOpcão inválida\n\n");
        }
        _getch();
        system("cls");

    } while (opcao != 0);
    return 0;
}
