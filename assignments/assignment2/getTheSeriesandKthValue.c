//probelem = make a series till number n of even then odd and find the kth position value
//input = n, k
//output = array with n elements of even then odd , kth value
//step1: take an array of n size
//step2: array er j = 0 position theke n/2 porjonto , 2 to n er moddhe even ekta kore boshabo
//step3: array[n/2] position theke last porjonto 1 to n all odd number bosthabo
//step4: array print korbo
//step5: k-1 index er value return korbo
#include<stdio.h>
int main(){
    int n, k, i, j = 0;
    scanf("%d%d", &n, &k);
    int series[n];
    for(i = 2; i<= n; i += 2){
        series[j] = i;
        j++;
    }
     for(i = 1; i<= n; i += 2){
        series[j] = i;
        j++;
    }
    for(i = 0; i<n; i++){
        printf("%d ", series[i]);
    }
    printf("\n%d", series[k - 1]);
    return 0;
}
//int getAnArray(int startingValue, int endingValue, int startingIndex){
//    for(i = startingValue; i <= endingValue;  startingValue+2){
//
//    }
//}

