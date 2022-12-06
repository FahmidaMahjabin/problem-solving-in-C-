#include<stdio.h>

void swap(int* a, int* b);
int paractice();
int main(){
    int a = 5, b = 7;
    //swap(&a, &b);
    printf("%d %d", a, b);
    paractice();
    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int paractice()
{
    int a = 6;
    int *p = &a;
    int *q = p;
    printf("%p", **q);
}
