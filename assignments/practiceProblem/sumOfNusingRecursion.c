//problem  = given n, get the sum of n numbers
//step1: if n = 1 then return
//step2: else n + sumOf(n-1)
#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", sumOfN(n));
    return 0;
}
int sumOfN(int n){
    if(n == 1){
        return 1;
    }
    else{
        return n + sumOfN(n-1);
    }
}
