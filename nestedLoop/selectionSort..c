//list of numbers deya thakbe sort korte hobe
//step1: array er first i = 0 theke itterate korbo minimum = array[0]
//step2: if minimum > array[i] then minimum = array[i] and minIndex = i
//step3: minimum peye gele swap to i = o position element with  minIndex
//do step1 to step3 for all elements
#include<stdio.h>
int main(){
    int numbers[100], n, i, j, temporary;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &numbers[i]);

    }
    int minimum, minIndex;
    for(i = 0; i< n-1; i++){
        minimum = numbers[i];
        minIndex = i;
        for(j = i+1; j<n; j++){
            if(minimum > numbers[j]){
                minimum = numbers[j];
                minIndex = j;
                }
        }
        temporary = numbers[i];
        numbers[i] = minimum;
        numbers[minIndex] = temporary;
        //printf("ith number: %d ", numbers[i]);
    }
    for(i = 0; i< n; i++){
        printf("%d ", numbers[i]);
    }
    return 0;

}
