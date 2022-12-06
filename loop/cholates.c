//problem = find the number of chocolates that one can have. condition one can get 1 chocolate from 4 empty packet
//input = number of chocolates
//step1: number of chocolate k divide korbo 4 diye. then quotient k number of chocolate er sathe sum korbo
//step2: packet = quotient + remainder
#include<stdio.h>
int main(){
    int n;
    printf("enter number of chocolates:");
    scanf("%d", &n);
    int noOfChocolates = n;
    while (n >= 4){
            noOfChocolates += floor(n / 4);
            n = n % 4 + floor(n / 4);


    }
    printf("%d", noOfChocolates);
    return 0;

}
