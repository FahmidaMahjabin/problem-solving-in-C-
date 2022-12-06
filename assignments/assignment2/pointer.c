#include<stdio.h>
int main(){
    int a = 12;
    int* p;
    p = &a;
    int ** q;
    q = &p;
    printf("%d\n", a) ;
    printf("%p\n", p);
    printf("%d\n", *p);
    printf("%p\n", *q);
    printf("%d\n", **q);


}
