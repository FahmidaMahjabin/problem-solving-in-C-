//problem = check if it's prime
//step1: number condition = prime
//step2: divide the number from 2 to n/2
    //step2.1:if divisible by any number then break and number condition = composite
//step3: print number condition

#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, i;
    scanf("%d", &n);
    bool isPrime = true;
    for(i = 2; i <= n/2; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }

    }
    if(isPrime){
       printf("%s", "Prime");
    }
    else{
        printf("%s", "Composite");
    }

    return 0;
}

