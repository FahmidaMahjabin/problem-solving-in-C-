#include<stdio.h>
void getSortedArray(int *numbers, int n);
int main(){
    int i, array[] = {5, 7, 1, 4, 10, 3}, n = 6;
    getSortedArray(array, n);
    for(i = 0; i< n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
void getSortedArray(int *numbers, int n){
    int i, j, temporary;
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
    }



}

