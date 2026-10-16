#include <stdio.h>
#include <locale.h>

int main() {
setlocale(LC_ALL,"portuguese");

int dia = 1;

switch(dia)
{
case 1:
    printf("Domingo\n");
    break;

case 2:
    printf("Segunda-feira\n");
    break;

default:
    printf("Não é nem Domingo nem Segunda\n");
}
}
