//problem  = ekta number deya thakne jeta sum of 4 even numbers . 4 even number ber korte hobe
//step1: divide the number by 4
//step2: then -3 from the number we will get the first consequitive even.
//step3: then add 2 for 3 times to get the next 3 numbers
//step4: return the array

#include<stdio.h>
int main(){
    int testCase, i, sum;
    scanf("%d", &testCase);
    for(i = 0; i< testCase; i++){
        scanf("%d", &sum);
        getConsequetiveEvens(sum);

    }
    return 0;
}

void getConsequetiveEvens(int sum){
    int midNumber = sum /4;
    int even = midNumber - 3;
    printf("%d ", even);
    int i = 0;
    for(i = 0; i< 3; i++){
        printf("%d ", even+=2 );

    }

}
