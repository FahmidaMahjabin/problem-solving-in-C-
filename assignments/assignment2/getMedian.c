#include<stdio.h>
float getMedian(int *array, int arraySize);
int main(){
    int array[] = {1, 3, 4, 5, 7, 10};
    int n =6;
    float median = getMedian(array, n);
    printf("median: %.2f", median);
    return 0;
}
float getMedian(int *array, int arraySize){
    //getSortedArray(array, arraySize);
    int midIndex = arraySize / 2;
    float median;
    if(arraySize % 2 == 0){

        median = (array[midIndex -1] + array[midIndex]) / 2;
    }
    else{
        median = array[midIndex];
    }
    return median;
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
