//step1: array er ekta element er jonno oi element er porer element theke last element porjnoto ekta kore element niye GCD check korbo
//step2: if GCD == 1 then count 2 cause position reverse kore eder GCD 1 hoy
#include<stdio.h>
int main(){
    int testCase, i, n, j, k;
    scanf("%d", &testCase);
    for(i = 0; i< testCase; i++){
        scanf("%d", &n);
        int array[n];
        for(j = 0; j< n; j++){
            scanf("%d", &array[j]);
        }
        int count = 0;
        for(j = 0; j< n-1; j++){
            for(k = j+1; k< n; k++){
                int GCD = getGCD(array[j], array[k]);
                if(GCD == 1){
                    count += 2;
                }
            }
        }
        printf("%d\n", count);

    }
    return 0;
    }
int getGCD(int number1, int number2){
    int smaller, larger, GCD;
    if(number1 <number2){
        smaller = number1;
        larger = number2;
    }
    else{
        smaller = number2;
        larger = number1;
    }
    if(larger % smaller == 0){
        GCD = smaller;
        return GCD;
    }
    else{
        int temp = smaller;
        smaller = larger - smaller;
        larger = temp;
        return getGCD(smaller, larger);

    }
}
