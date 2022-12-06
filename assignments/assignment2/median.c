#include<stdio.h>
float getMedian(int *array, int arraySize);
int main(){
    int array[] = {1, 3, 4, 5, 7, 10};
    float median = getMedian(array, 6);
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

