// Após analise do gerente de um banco, o cadastro dos interessados em comprar casas - código e
// tipo de casa (1 - pequena, 2 - média, 3 - grande), são inseridos em uma lista de prioridades. Cada
// vez que o gerente pedir para incluir, os dados do cliente deverão ser incluídos na posição
//determinada por ele.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define InicioArranjo 1
#define MaxTam 5

typedef int Apontador;

typedef struct 
{
    int cod;
    int tipo;
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
    Lista->Primeiro = InicioArranjo;
    Lista->Ultimo = Lista->Primeiro;
}

int Vazia (TipoLista Lista)
{
    return (Lista.Primeiro == Lista.Ultimo);
}

void Insere (TipoItem x, TipoLista *Lista)
{
    if(Lista->Ultimo > MaxTam)
    {
        printf("\n A Lista Esta Cheia\n");
    }
    else
    {
        Lista->Item[Lista->Ultimo -1] = x;
        Lista->Ultimo = Lista->Ultimo +1;
    }
}

void Imprime (TipoLista Lista)
{
    int aux;
    for(aux=Lista.Primeiro -1; aux <= (Lista.Ultimo -2); aux++)
    {
        printf("Codigo da Casa: %d\n", Lista.Item[aux].cod);
        if(Lista.Item[aux].tipo == 1)
        {
            printf("Tipo de Casa: Casa Pequena.\n");
        }
        else if(Lista.Item[aux].tipo == 2)
        {
            printf("Tipo de Casa: Casa Media.\n");
        }
        else if (Lista.Item[aux].tipo == 3)
        {
            printf("Tipo de Casa: Casa Grande.\n");
        }
        printf("\n\n\n");
    }
}

void InserePosicao (TipoItem x, Apontador pos, TipoLista *Lista)
{
    int aux;
    if(Lista->Ultimo > MaxTam)
    {
        printf("A Lista Esta Cheia\n");
    }
    else
    {
        for(aux = Lista->Ultimo -1; aux >= pos; aux--)
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
    setlocale (LC_ALL, "");
    FLVazia(&Lista);

    do
    {
        printf("-----------------------------MENU---------------------------\n\n");
        printf("Digite a opcao desejada:\n");
        printf("0 - Sair.\n");
        printf("1 - Esvaziar Lista.\n");
        printf("2 - Verificar se a lista esta vazia.\n");
        printf("3 - Inserir Casa.\n");
        printf("4 - Imprimir os Codigos das Casas.\n");
        printf("5 - Inserir Codigos das Casas em qualquer posiçao.\n");
        printf("------------------------------------------------------------\n\n");
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
            resposta =Vazia(Lista);
            if (resposta == 1)
            {
                printf("\n Lista esta vazia\n");
            }
            else
            {
                printf("\n Lista nao esta vazia\n");
            }
            break;
        }
        case 3:
        {
            printf("Digite o codigo:\n");
            scanf("%d", &x.cod);
            printf("Digite o tipo de casa:\n");
            printf("1 - Pequena.\n");
            printf("2 - Media.\n");
            printf("3 - Grande.\n");
            scanf("%d", &x.tipo);
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
            printf("Digite a posiçao:\n");
            scanf("%d", &pos);
            printf("Digite o codigo:\n");
            scanf("%d", &x.cod);
            printf("Digite o tipo de casa:\n");
            printf("1 - Pequena.\n");
            printf("2 - Media.\n");
            printf("3 - Grande.\n");
            scanf("%d", &x.tipo);
            InserePosicao(x, pos -1, &Lista);
            break;
        }
        
        default: printf("\n\nOpção Invalida\n\n");
        }
        _getch();
        system("cls");
    } while (opcao != 0);

    return (0);
}