//step1: take test case input
//step2: take T times of n input
//step3: 2 ^ i / n >= 1 hole 2 ^i er value ta target ans hobe
#include<stdio.h>
int nearestPowerof2(int n);
int main(){
    int T, i, number, nearestNumber;
    scanf("%d", &T);
    for(i = 0; i< T; i++){
        scanf("%d", &number);
        nearestNumber =  nearestPowerof2(number);
        printf("nearest  number: %d\n",nearestNumber);

    }
    return 0;
}

int nearestPowerof2(int n){
    int i = 0;
    while(pow(2, i) / n < 1){
        i++;
    }

    return pow(2, i);
}
