#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int dia;

printf("Digite um número de 1 a 7 para dizer qual dia da semana corresponde\n");
scanf("%d", &dia);

switch(dia)
{
case 1:
    printf("Domingo\n");
    break;

case 2:
    printf("Segunda-Feira\n");
    break;

case 3:
    printf("Terça-Feira\n");
    break;

case 4:
    printf("Quarta-Feira\n");
    break;

case 5:
    printf("Quinta-Feira\n");
    break;

case 6:
    printf("Sexta-Feira\n");
    break;

case 7:
    printf("Sabado\n");
    break;

default:
    printf("Dia Inválido\n");
}
}

