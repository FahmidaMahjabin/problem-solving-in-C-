//problem = number n er all digits er sum prime kina check
//step1: number er last digit ber korbo
//step2: sum += lastDigit
//step3: sum prime kina check korbo
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d", &n);
    int prime = isSumPrime(n);
    if(prime){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

int isSumPrime(int n){
    int sum = getSumOfAllDigits(n);
    return isPrime(sum);

}
int getSumOfAllDigits(int n){
    int sum  = 0;
    while(n > 0){
        sum += n % 10;
        n = n/ 10;
    }
    return sum;
}

int isPrime(int number){
    int i;
    int upperLimit = sqrt(number);
    for(i = 2; i<= upperLimit; i++){
        if(number % i == 0){
            return 0;
        }
    }
    return 1;

}
