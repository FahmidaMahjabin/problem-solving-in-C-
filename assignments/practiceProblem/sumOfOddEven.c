#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int numbers[n];
    for(i = 1; i<= n; i++){
        scanf("%d", &numbers[i]);

    }
    int sumOfOddEven = getSumOfOddEven(numbers, n);
    printf("sumOfOddEven: %d", sumOfOddEven);
    return 0;
}


int getSumOfOddEven(int numbers[], int arraySize){
    int i, sum = 0;
    for(i = 1; i<= arraySize; i++){
        if(i % 2 == 0 && numbers[i] % 2 == 0){
            printf("%dth position the number: %d\n", i, numbers[i]);
            sum += i + numbers[i];

        }
        else if(i % 2 != 0 && numbers[i] % 2 != 0){
            printf("%dth position the number: %d\n", i, numbers[i]);
            sum += i + numbers[i];
        }
    }
    return sum;
}
