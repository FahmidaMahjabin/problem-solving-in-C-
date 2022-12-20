#include <stdio.h>
int main()
{
    int a = 10;
    int *p=&a;
    int **q=&p;
    printf("%d", *p);
    printf("%d\n", **q);
    **q=22;
    printf("%d", a);
    return 0;
}
