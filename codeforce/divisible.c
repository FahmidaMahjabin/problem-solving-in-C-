//problem = take two numbers, find out if any one is divisible by the other or not
//step1: if a < b then b % a == 0 divisible else not divisible
//step2: else a % b == 0 divisible else not divisible
#include<stdio.h>
int main(){
    int a, b;
    scanf("%d%d", &a, &b);
    if(a < b){
        if(b % a == 0){
            printf("%s", "The second number is divisible by the first number.");
        }
        else{
            printf("%s", "None of them are divisible by the other. ");
        }
    }
    else{
        if(a % b == 0){
           printf("%s", "The first number is divisible by the second number.");
        }
        else{
            printf("%s", "None of them are divisible by the other. ");
        }
    }
    return 0;
}
