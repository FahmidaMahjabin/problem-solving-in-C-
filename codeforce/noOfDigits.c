//problem = given a number and find the number of digits
//divide the number by 10 , until the quotient == 0 and count digits
//while n > 0 quotient = n / 10 and digit += 1
#include<stdio.h>
int main(){
    long long int n;
    int digits = 0;

    scanf("%lld", &n);
    while(n != 0){
        n = n / 10;
        digits += 1;

    }
    printf("%d", digits);
    return 0;
}
