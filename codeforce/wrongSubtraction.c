//problem = given n(number0 , k(steps) find what will be the number after k steps of subtraction
//step1:if the number is divisible by 10 then divide the number by 10
//step2: else subtract 1
//step3: do the subtraction till k steps then return number
#include<stdio.h>
int main(){
    int n;
    int k, i;
    scanf("%d%d", &n, &k);

    for(i = 0; i<k; i++){
        if(n%10 == 0){
            n = n / 10;
        }
        else{
            n = n-1;
        }
    }
    printf("%d", n);
    return 0;
    }
