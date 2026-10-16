#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n;
    int *v;

    printf("Entre com o tamanho do vetor:\n");
    scanf("%d", &n);

    v = malloc(n * sizeof(int));

    printf("Preencha o vetor com os valores inteiros desejados:\n");
    for(int i = 0; i < n; i++)
    {
      scanf("%d", &v[i]);
    }
    free(v);
}
