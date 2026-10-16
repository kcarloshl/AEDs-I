#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int op;

for(int i = 0; i < 5; i++) {

printf("\n 1- Abrir Arquivo\n 2- Salvar Arquivo\n 3- Imprimir Arquivo\n 4- Sair\n");
printf("\n");

printf("Digite um número de corresponde a função que deseja:\n");
scanf("%d", &op);
printf("\n");

switch(op)
{
case 1:
    system("cls");
    printf("Abrindo Arquivo\n");
    break;

case 2:
    system("cls");
    printf("Salvando Arquivo\n");
    break;

case 3:
    system("cls");
    printf("Imprimindo Arquivo\n");
    break;

case 4:
    system("cls");
    printf("Saindo...\n");
    return 0;

default:
    system("cls");
    printf("Opção Inválida\n");
}
}
}


