//problem = find all factors of a number
//step1: print all the numbers from 1 to n/2 that can divide n
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    for(i = 1; i <= n/2; i++){
        if(n % i == 0){
            printf("%d, ", i);
        }
    }
    printf("%d ", n);
    return 0;
}
