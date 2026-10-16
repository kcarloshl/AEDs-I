#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cod[3];
    int vdp[3];
    int tdc[3];
    int vtca = 0, vtcp = 0, vtce = 0;

    printf("Cadastre suas vendas:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Digite o codigo do produto:\n");
        scanf("%d", &cod[i]);
        printf("Digite o valor do produto:\n");
        scanf("%d", &vdp[i]);
        printf("Digite o tipo de pagamento do produto:\n");
        printf("1 para pagamento a vista.\n");
        printf("2 para pagamento a prazo.\n");
        scanf("%d", &tdc[i]);
    }

    for(int i = 0; i < 3; i++)
    {
        if(tdc[i] == 1)
        {
            vtca = vtca + vdp[i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        if(tdc[i] == 2)
        {
            vtcp = vtcp + vdp[i];
        }
    }

    for(int i = 0; i < 3; i++)
    {
        vtce = vtce + vdp[i];
    }

    printf("Valor total das compras a vista: %d\n", vtca);
    printf("Valor total das compras a prazo: %d\n", vtcp);
    printf("Valor total das compras efetuadas: %d\n", vtce);
}
