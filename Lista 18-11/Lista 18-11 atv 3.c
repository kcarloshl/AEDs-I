#include <stdio.h>
#include <locale.h>

struct Funcionario
    {
        char nome[60];
        char telefone[15];
        int data[3];
    };
int main(){
    setlocale(LC_ALL, "portuguese");

    struct Funcionario funcionarios[2];
    int consulta;

    for (int i = 0; i < 2; i++)
    {

        printf("Digite o nome do funcionario %d: ", i+1);
        scanf(" %[^\n]", funcionarios[i].nome);
        printf("Digite o telefone do funcionario %d: ", i+1);
        scanf(" %[^\n]", funcionarios[i].telefone);
        printf("Digite a data de nascimento do funcionario %d: ", i+1);
        scanf("%d %d %d", &funcionarios[i].data[0], &funcionarios[i].data[1], &funcionarios[i].data[2]);
        system("cls");
        getchar();
    }
    system("cls");
    printf("Consulta de aniversarios. Insira o mes(1-12): ");
    scanf("%d", &consulta);
    printf("\n");
    printf("Funcionarios que fazem aniversario no mes %d:\n", consulta);
    int num = 0;

    for (int i = 0; i < 2; i++)
    {
        if (funcionarios[i].data[1] == consulta)
        {
            printf("Nome: %s\n", funcionarios[i].nome);
            printf("Telefone: %s\n", funcionarios[i].telefone);
            printf("Dia: %d\n", funcionarios[i].data[0]);
            num = 1;
        }

    }
    if (!num){
        printf ("Nenhum aniversariante nesse mes.\n");
    }

return 0;
}
