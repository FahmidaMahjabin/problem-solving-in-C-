#include<stdio.h>
int main(){
    int a, b, c;
    printf("enter three numbers:");
    scanf("%d%d%d", &a, &b, &c);
    if(a > b && a > c){
        printf("a is greatest");
    }
    else{
        if(c > a && c > b){
            printf("c is greatest");
        }
        else{
            printf("b is greatest");
        }
    }
    return 0;

}
