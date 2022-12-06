//step1: input n
//step2: sum = 0
//step3: divide the n / 10 till n == 0 and take remainder. sum += remainder
#include<stdio.h>
int main(){
    int n, sum = 0, remainder;
    scanf("%d", &n);
    while ( n > 0){
        remainder = n % 10;
        sum += remainder;
        n = n / 10;
    }
    printf("%d ", sum);
    return 0;
}
