//step1: make a function to sort in accending order
//step2: make a function to sort in decending order
//step3: make a new array with same size with the value of array1- array2

#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int array1[n], array2[n];
    for(i = 0; i<n; i++){
        scanf("%d", &array1[i]);
    }
    for(i = 0; i<n; i++){
        scanf("%d", &array2[i]);
    }
    sortInAscendingOrder(array1, n);
    sortInDescendingOrder(array2, n);





    for(i = 0; i< n; i++){
        printf("%d ", array1[i] - array2[i]);
    }

}

//function = sort in ascending order
//input = size and the array
//step1: array er first to last porjonto ekta kore element nibo
//step2: compare the element with the next element .
//step3: if array[i] > array[i+1] then swap then
//step4: evabe last er element ta sort hoye jabe

int sortInAscendingOrder(int array[], int n){
    int i, j;
    for(i = 0; i< n; i++){
        for(j = 0; j< n-i-1; j++){
            if(array[j] > array[j+1]){
                //printf("before swap array[j]: %d, srray[j+1]: %d\n", array[j], array[j+1]);
                swap(&array[j], &array[j+1]);
                //printf("after swap array[j]: %d, srray[j+1]: %d\n", array[j], array[j+1]);
            }
        }
    }
    return array;

}

int sortInDescendingOrder(int array[], int n){
    int i, j;
    for(i = 0; i< n; i++){
        for(j = 0; j< n-i-1; j++){
            if(array[j] < array[j+1]){
                //printf("before swap array[j]: %d, srray[j+1]: %d\n", array[j], array[j+1]);
                swap(&array[j], &array[j+1]);
                //printf("after swap array[j]: %d, srray[j+1]: %d\n", array[j], array[j+1]);
            }
        }
    }
    return array;

}
void swap(int* a, int* b){
    int* temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
