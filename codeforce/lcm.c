//find the LCM of the nwo numbers
//step1: if a < b then
    //step1.1: largest = b  and smallest = a
//step2:else largest = a, smallest = b
//step3: if largest % smallest == 0 then lcm = largest
//step4: else  largest * n % smallest == 0 till divide and if divisible lcm = n 8 largest

#include<stdio.h>
int main(){
    int a, b, largest, smallest, lcm;
    scanf("%d%d", &a, &b);
    if(a > b){
        largest = a;
        smallest = b;
    }
    else{
        largest = b;
        smallest = a;
    }
    if(largest % smallest == 0){
        lcm = largest;
    }
    else{
        int n = 2;
        while(n * largest % smallest != 0){
                n++;
        }
        lcm = n * largest;
    }
    printf("the LCm of %d and %d is %d",a, b, lcm);
    return 0;
}

