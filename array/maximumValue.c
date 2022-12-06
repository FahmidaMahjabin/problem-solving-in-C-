//find maximum from an array
//step1: let first element as maximum
//step2: if maximum < array[i] then maximum = array[i]
//step3:do the step2 for all the elements
//step4: print maximum
#include<stdio.h>
int main(){
    int array[5], i;
    for( i = 0; i< 5; i++){
        scanf("%d", &array[i]);
    }
    int maximum;
    maximum = array[0];
    for(i = 0; i< 5; i++){
        if (maximum < array[i]){
            maximum = array[i];
        }
    }
    printf("maximum is = %d", maximum);
    return 0;

}
