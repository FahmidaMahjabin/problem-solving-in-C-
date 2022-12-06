#include<stdio.h>
int add_three_nums(int a , int b, int c );
int main(){
    int a, b;
    scanf("%d", &a);
    scanf("%d ", &b);
    printf("%d", add_three_nums(a, b));
}
int add_three_nums(int a , int b , int c)
{
	return a+b+c;
}
