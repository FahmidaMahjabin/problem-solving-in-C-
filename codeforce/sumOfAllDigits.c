//problem = find the sum of all digits in a number
//step1: divide the number(n) till n == 0 ;n = n / 10;
//step2: remainder = n % 10 sumOfDigits += remainder

#include<stdio.h>
int main(){
    long long int n;
    int remainder ,sumOfAllDigits = 0;
    scanf("%lld", &n);
    while(n != 0){
        remainder = n % 10;
        sumOfAllDigits += remainder;
        n = n /10;
    }
    printf("%d", sumOfAllDigits);
    return 0;

}
