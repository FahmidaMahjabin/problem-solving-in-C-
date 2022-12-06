#include<stdio.h>
int main(){
    int x, y;
    printf("enter two numbers:");
    scanf("%d%d", &x, &y);
    if(x > y){
        printf("x is greater");
    }
    else{
        printf("y is greater");
    }
    return 0;
}
