#include <stdio.h>

void main()
{
int x1 = 11, x2 = 22, x3 = 33;
int *p;

p = &x1;
x2 = *p;
*p = x3;
p = &x3;
*p = 0;


printf("cont:%d %d %d %d\n\n", x1,x2,x3, *p);
printf("addr:%d %d %d %d\n\n", &x1, &x2, &x3, p);
}
