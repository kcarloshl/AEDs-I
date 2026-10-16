#include <stdio.h>
#include <locale.h>
int main()
{
int *p, *q;
int x;
p = malloc(sizeof(int));
*p = 3;
q = p;
printf("%d %d\n", *p, *q);
x = 7;
*q = x;
printf("%d %d\n", *p, *q);
p = malloc(sizeof(int));
*p = 5;
printf("%d %d\n", *p, *q);
 }


