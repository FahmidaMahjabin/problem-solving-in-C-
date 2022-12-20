//input = n (number upto get the fibonacci number)
//output = fibonacci series
//step1: if n = 0 then return 0
//step2: else if n = 1
//step3: else if nth number = (n-1)th number + (n-2)th number

#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d, ", getFibonacci(n));
}

int getFibonacci(int n){
    if(n == 0){
        //printf("%d, ", n);
        return 0;
    }
    else if(n == 1){
        //printf("%d, ", n);
        return 1;
    }
    else{
        printf("%d, ", getFibonacci(n-1) + getFibonacci(n - 2));
        return getFibonacci(n-1) + getFibonacci(n - 2);
    }
}
