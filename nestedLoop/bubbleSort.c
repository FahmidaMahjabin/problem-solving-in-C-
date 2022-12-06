//step1: if array[i] > array[i+1] then swap them
//step2: go to the next element and do the same for all elements
#include<stdio.h>
int main(){
    int n, numbers[100], i,j, temporary;
    scanf("%d", &n);
    for(i = 0; i< n; i++){
        scanf("%d", &numbers[i]);
        //printf("%d", numbers[i]);
    }

    for(i = 0; i< n; i++){
        for(j = 0; j< n-i; j++){
            if(numbers[j] > numbers[j + 1]){
                temporary = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temporary;

            }
            //printf("number in j: %d \n", numbers[j]);
        }
        printf("%d ", numbers[j]);
    }
    for(j = 0; j < n; j++){
        printf("%d ", numbers[j]);
    }
    return 0;

}
