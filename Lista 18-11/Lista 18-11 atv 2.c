#include <stdio.h>

#define quarto1 150
#define quarto2 100
#define quarto3 75
#define quarto4 50

int main(){

    char nome[60];
    int tipo, qtdDiarias;
    float cInterno, valorDiaria, totalDiarias, subtotal, taxaServico, totalGeral;

    printf("Digite o nome do hospede: ");
    fgets(nome, 50, stdin);
    system("cls");
    printf("Qual o tipo do apartamento? (1, 2, 3 ou 4): ");
    scanf("%d", &tipo);
    system("cls");
    printf("Informe o numero total de diarias: ");
    scanf("%d", &qtdDiarias);
    system("cls");
    printf("Informe o valor do consumo interno: ");
    scanf("%f", &cInterno);
    system("cls");

    switch (tipo)
    {
    case 1:
        valorDiaria = quarto1;
        break;
    case 2:
        valorDiaria = quarto2;
        break;
    case 3:
        valorDiaria = quarto3;
        break;
    case 4:
        valorDiaria = quarto4;
        break;
    default:
        printf("Tipo de Apartamento Invalido.\n");
        return 1;
    }

    totalDiarias = qtdDiarias * valorDiaria;
    subtotal = totalDiarias + cInterno;
    taxaServico = subtotal * 0.10;
    totalGeral = subtotal + taxaServico;

    printf("====== CONSUMO TOTAL ======\n");
    printf("Nome do Hospede: %s", nome);
    printf("Tipo de Apartamento: %d\n", tipo);
    printf("Numero de Diarias: %d\n", qtdDiarias);
    printf("Valor Unitario da Diaria: %.2f\n", valorDiaria);
    printf("Total das Diarias: %.2f\n", totalDiarias);
    printf("Consumo Interno: %.2f\n", cInterno);
    printf("Subtotal: %.2f\n", subtotal);
    printf("Taxa de Servico: %.2f\n", taxaServico);
    printf("Total Geral: %.2f\n", totalGeral);

    return 0;
}
