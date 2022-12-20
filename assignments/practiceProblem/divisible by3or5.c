#include<stdio.h>
int isDivisibleBy3(int number);
int isDivisibleBy5(int number);
int main(){
    int n, i;
    scanf("%d", &n);
    int numbers[n], count = 0;
    for(i = 0; i< n; i++){
        scanf("%d", &numbers[i]);
        if(isDivisibleBy3(numbers[i]) ||  isDivisibleBy5(numbers[i])){
            count++;
        }
    }
    if(count>0){
        return count;
    }
    return -1;


}
int isDivisibleBy3(int number){
    if(number % 3 == 0){
        return 1;
    }
    return 0;
}

int isDivisibleBy5(int number){
    if(number % 5 == 0){
        return 1;
    }
    return 0;
}
