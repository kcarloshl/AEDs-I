#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MaxTam 5

typedef int Apontador;

typedef struct
{
    int cod;
}TipoItem;

typedef struct
{
    TipoItem Item[MaxTam];
    Apontador Frente;
    Apontador Tras;
}TipoFila;

TipoFila Fila;
TipoItem x;
int tamanho = 0;

void FFVazia(TipoFila *Fila)
{
    Fila->Frente = 1;
    Fila->Tras = Fila->Frente;
}

int Vazia(TipoFila Fila)
{
    return(Fila.Frente == Fila.Tras);
}

void Enfileira(TipoItem x, TipoFila *Fila)
{
    if(Fila->Tras % MaxTam +1 == Fila->Frente)
    {
        printf("\nA Fila Está Cheia\n");
    }
    else
    {
        Fila->Item[Fila->Tras -1] = x;
        Fila->Tras = Fila->Tras % MaxTam +1;
        tamanho = tamanho + 1;
    }
}

void Imprime(TipoFila Fila)
{
    int aux;
    printf("-----------------CODIGOS-----------------\n\n");
    for(aux=Fila.Frente-1; aux<=(Fila.Tras-2); aux++)
    {
        printf("°Cod %d: %d\n\n", aux, Fila.Item[aux].cod);
    }
    printf("-----------------------------------------\n\n");
}

void Desenfileira(TipoFila *Fila, TipoItem *x)
{
    if(Vazia(*Fila))
    {
        printf("ERRO: A Fila Está Vazia\n");
    }
    else
    {
        *x = Fila->Item[Fila->Frente-1];
        printf("O elemento desenfileirado foi o codigo %d\n", x->cod);
        Fila->Frente = Fila->Frente % MaxTam + 1;
        tamanho = tamanho -1;
    }
}

int TamanhoFila(TipoFila Fila)
{
    return(tamanho);
}

void Procura(TipoItem x, TipoFila Fila)
{
    int aux;
    for(aux = Fila.Frente -1; aux < Fila.Tras; aux++)
    {
        if(Fila.Item[aux].cod == x.cod)
        {
            printf("Elemento encontrado:\nCod %d: %d\n\n", aux, Fila.Item[aux].cod);
            return;
        }
    }
    printf("Elemento não encontrado\n");
}
int main()
{
    int opcao, resposta;
    setlocale(LC_ALL, "");
    FFVazia(&Fila);

    do
    {
        printf("----------------------------MENU----------------------------\n\n");
        printf("Digite a opcão desejada:\n");
        printf("0 - Sair.\n");
        printf("1 - Esvaziar Fila.\n");
        printf("2 - Verificar se a fila está vazia.\n");
        printf("3 - Enfileirar elemento na fila.\n");
        printf("4 - Imprimir os elementos da fila.\n");
        printf("5 - Desenfileirar os elementos da fila.\n");
        printf("6 - Tamanho da fila.\n");
        printf("7 - Procurar elemento na fila.\n");
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
                FFVazia(&Fila);
                printf("\nFILA ESVAZIADA\n");
                break;
            }
        case 2:
            {
                resposta = Vazia(Fila);
                if(resposta == 1)
                {
                    printf("\n FILA ESTÁ VAZIA\n");
                } else
                {
                    printf("\n FILA NÃO ESTÁ VAZIA\n");
                }
                break;
            }
        case 3:
            {
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                Enfileira(x, &Fila);
                break;
            }
        case 4:
            {
                Imprime(Fila);
                break;
            }
        case 5:
            {
                Desenfileira(&Fila, &x);
                break;
            }
        case 6:
            {
                printf("A Fila Contém %d Elementos\n", TamanhoFila(Fila));//
                break;
            }
        case 7:
            {
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                Procura(x, Fila);
                break;
            }
            default: printf("\n\nOpção Inválida!\n\n");
        }
        _getch();
        system("cls");
    }while (opcao != 0);
    return(0);
}
