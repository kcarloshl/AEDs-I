#include <stdio.h>>
#include <stdlib.h>
#include <locale.h>
#define InicioArranjo 1
#define MaxTam 5

typedef int Apontador;

typedef struct
{
    int nota;
} TipoItem;

typedef struct
{
    TipoItem Item[MaxTam];
    Apontador Primeiro;
    Apontador Ultimo;
} TipoLista;

TipoLista Lista;

int main()
{
    setlocale(LC_ALL, "");




    return 0;
}
