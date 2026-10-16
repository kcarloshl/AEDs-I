#include <stdio.h>
#include <stdlib.h>
#define maxtam 5

void multiplicacao(int a[], int b, int c)
{
    for(int i = 0; i < b; i++)
    {
        a[i] = a[i] * c;
    }

    for(int i = 0; i < b; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
int vet[5];
int tam;
int mult;

scanf("%d", &tam);

for(int i = 0; i < tam; i++)
{
    scanf("%d", &vet[i]);
}

scanf("%d", &mult);

multiplicacao(vet, tam, mult);

}
