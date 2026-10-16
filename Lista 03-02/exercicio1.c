#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MaxTam 5

typedef int Apontador;
typedef struct
{
    int cod;
    int idade;
}TipoItem;

typedef struct
{
    TipoItem Item[MaxTam];
    Apontador Topo;
}TipoPilha;

TipoPilha Pilha;
TipoItem x;
TipoPilha Pilha2;
TipoPilha Pilha3;
int tam = 0;

void FPVazia (TipoPilha *Pilha)
{
    Pilha->Topo = 0;
}

int Vazia (TipoPilha Pilha)
{
    return(Pilha.Topo==0);
}

void Empilhar (TipoItem x, TipoPilha *Pilha)
{
    if(Pilha->Topo == MaxTam)
    {
        printf("\nERRO: PILHA ALTA DEMAIS!\n");
    }
    else
    {
        Pilha->Item[Pilha->Topo] = x;
        Pilha->Topo += 1;
        tam+=1;
    }
}

void Imprimir (TipoPilha Pilha)
{
    int aux;
    if(Vazia(Pilha))
    {
        printf("A Pilha Está Vazia\n");
    }
    else
    {
        for(aux = Pilha.Topo - 1; aux >= 0; aux--)
        {
            printf("Cod %d: %d\n", aux+1, Pilha.Item[aux].cod);
            printf("Idade %d: %d\n\n", aux+1, Pilha.Item[aux].idade);
        }
    }
}

void ImprimirFundoTopo (TipoPilha Pilha)
{
    int aux;
    if(Vazia(Pilha))
    {
        printf("A Pilha Está Vazia\n");
    }
    else
    {
        for(aux = 0; aux <= Pilha.Topo-1; aux++)
        {
            printf("Cod %d: %d\n", aux+1, Pilha.Item[aux].cod);
            printf("Idade %d: %d\n\n", aux+1, Pilha.Item[aux].idade);
        }
    }
}

void Desempilhar (TipoPilha *Pilha, TipoItem *x)
{
    if(Vazia(*Pilha))
    {
        printf("Erro: A Pilha Está Vazia\n");
    }
    else
    {
        *x = Pilha->Item[Pilha->Topo - 1];
        Pilha->Topo -= 1;
        tam-=1;

    }
}

int Altura (TipoPilha Pilha)
{
    return(tam);
}
void Procura (TipoItem x, TipoPilha Pilha)
{
    int aux;
    for(aux = 0; aux <= Pilha.Topo-1; aux++)
    {
        if(Pilha.Item[aux].cod == x.cod)
        {
            printf("Elemento encontrado:\nCod %d: %d\n\n", aux+1, Pilha.Item[aux].cod);
            printf("Idade %d: %d\n\n", aux+1, Pilha.Item[aux].idade);
            return;
        }
    }
    printf("Elemento não encontrado\n");
}

void Dividir(TipoPilha *Pilha, TipoPilha *Pilha2, TipoPilha *Pilha3)
{
    FPVazia(Pilha2);
    FPVazia(Pilha3);

    int tamanho = Pilha->Topo;
    int metade = tamanho/2;

    for(int i = 0; i < metade; i++)
    {
    Empilhar(Pilha->Item[i], Pilha2);
    }

    for(int i = metade; i < tamanho; i++)
    {
    Empilhar(Pilha->Item[i], Pilha3);
    }
}

void MaiorMenorMedia (TipoPilha Pilha)
{
    if(Vazia(Pilha))
    {
        printf("A pilha está vazia.\n");
        return;
    }

    int maior = Pilha.Item[0].idade;
    int menor = Pilha.Item[0].idade;
    int soma = 0;

    float media;

    for(int i = 0; i < Pilha.Topo; i++)
    {
        int idade = Pilha.Item[i].idade;
        if(idade > maior)
        {
            maior = idade;
        }

        if(idade < maior)
        {
            menor = idade;
        }
        soma += idade;
    }

    media = (float) soma/Pilha.Topo;

    printf("Maior Idade: %d\n", maior);
    printf("Menor Idade: %d\n", menor);
    printf("Média das idades: %.2f\n", media);
}

int main()
{

    int opcao, resposta;
    setlocale(LC_ALL, "");
    FPVazia(&Pilha);

    do
    {
        printf("----------------------------MENU----------------------------\n\n");
        printf("Digite a opcão desejada:\n");
        printf(" 0 - Sair.\n");
        printf(" 1 - Esvaziar Pilha.\n");
        printf(" 2 - Verificar se a Pilha está vazia.\n");
        printf(" 3 - Empilhar elemento na Pilha.\n");
        printf(" 4 - Imprimir os elementos da Pilha.\n");
        printf(" 5 - Imprimir do Fundo para o Topo.\n");
        printf(" 6 - Desempilhar os elementos da Pilha.\n");
        printf(" 7 - Altura da Pilha.\n");
        printf(" 8 - Procurar um elemento.\n");
        printf(" 9 - Dividir a Pilha em duas.\n");
        printf("10 - Maior, Menor e Média das Idades.\n");
        printf("------------------------------------------------------------\n\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            {
                system("cls");
                printf("\nPROGRAMA ENCERRADO!");
                break;
            }
        case 1:
            {
                system("cls");
                FPVazia(&Pilha);
                printf("\nPILHA ESVAZIADA\n");
                break;
            }
        case 2:
            {
                system("cls");
                resposta = Vazia(Pilha);
                if(resposta == 1)
                {
                     printf("\nA PILHA ESTÁ VAZIA\n");
                } else
                {
                    printf("\nA PILHA NÃO ESTÁ VAZIA\n");
                }
                break;
            }
        case 3:
            {
                system("cls");
                printf("\nDigite o código\n");
                scanf("%d", &x.cod);
                printf("Digite a idade\n");
                scanf("%d", &x.idade);
                Empilhar(x, &Pilha);
                break;
            }
        case 4:
            {
                system("cls");
                Imprimir(Pilha);
                break;
            }
        case 5:
            {
                system("cls");
                ImprimirFundoTopo(Pilha);
                break;
            }
        case 6:
            {
                system("cls");
                Desempilhar(&Pilha, &x);
                printf("O elemento retirado foi o codigo: %d\n", x.cod);
                break;
            }
        case 7:
            {
                system("cls");
                printf("\nA pilha contém %d elemento(s) de altura.\n", Altura(Pilha));
                break;
            }
        case 8:
            {
                system("cls");
                printf("Digite o código\n");
                scanf("%d", &x.cod);
                Procura(x, Pilha);
                break;
            }
        case 9:
            {
                system("cls");
                TipoPilha Pilha2, Pilha3;
                Dividir(&Pilha, &Pilha2, &Pilha3);
                printf("\nPilha dividida com sucesso!\n");

                printf("\nElementos da Pilha 1:\n\n");
                Imprimir(Pilha2);

                printf("\nElementos da Pilha 2:\n\n");
                Imprimir(Pilha3);
                break;
            }
        case 10:
            {
                system("cls");
                MaiorMenorMedia(Pilha);
                break;
            }
            default:printf("\n\nOPÇÃO INVÁLIDA\n\n");
        }
       _getch();
       system("cls");
    }while (opcao != 0);
    return (0);
}
