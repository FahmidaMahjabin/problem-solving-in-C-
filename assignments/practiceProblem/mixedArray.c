#include<stdio.h>
float getAverageOfEvens(int numbers[],int size);
int isPrime(int number);
int main(){
    int n, i;
    scanf("%d", &n);
    int numbers[n], countPrime = 0;
    for(i = 0; i< n; i++){
        scanf("%d", numbers+i);
        if(isPrime(numbers[i])){
            countPrime++;
        }
    }
    printf("Prime Numbers: %d\n", countPrime);
    float averageOfEvens = getAverageOfEvens(numbers, n);
    printf("Average of all even integers: %.2f", averageOfEvens);
    return 0;
    }
int isPrime(int number){
    int i ;
    for(i = 2; i<= sqrt(number); i++){
        if(number  % i == 0){
            return 0;
        }
    }
    return 1;
}

float getAverageOfEvens(int numbers[],int size){
    int i, evenSum  = 0, numberOfEvens = 0;
    for(i = 0; i< size; i++){
        if(numbers[i] % 2 == 0){
            evenSum+= numbers[i];
            numberOfEvens++;
        }
    }
    float average = evenSum / numberOfEvens;
    return average;

}
