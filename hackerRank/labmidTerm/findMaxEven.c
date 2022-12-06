//step1: let maximum = array[j]
//step2:if array[i] > maximum then maximum = array[i] and maxIndex = j
//step3: when get the maximum then swap maxIndex and jth position index
//step4: do step1 to step3 for all element and it will be a  sorted list
//step5: if an element is divisible by 2 then even and add to evens[] list
//step6: else add to odds[] list
//step7: if evens is empty then printf odds[1] + odds[2]
//step8: else if odds is empty then printf evens[0] + evens[1]
//step9: else find the highest and return that
#include<stdio.h>
int main(){
    int N, i, j, numbers[10], maximum, maxIndex, temporary;
    scanf("%d", &N);
    for(i = 0; i< N; i++){
        scanf("%d", &numbers[i]);
    }
    for(i = 0; i< N-1;  i++){
        maximum = numbers[i];
        for(j = i+1; j< N; j++){
            if(maximum < numbers[j]){
                maximum = numbers[j];
                maxIndex = j;
            }
        }
        temporary = numbers[i];
        numbers[i] = maximum;
        numbers[maxIndex] = temporary;

    }
    int evens[10], odds[10], k = 0, l = 0;
    for(i = 0; i< N; i++){
        if(numbers[i] %2 == 0){
            evens[k] = numbers[i];
            k++;

        }
        else{
            odds[l] = numbers[i];
            l++;
        }
    }
    //for(i = 0; i< ; i++){
        //printf("%d ", numbers[i]);
    //}


    printf("size of evens:%d, sizeof odds: %d\n", sizeof(evens)/ sizeof(evens[0]), sizeof(odds) / sizeof(odds[0]));
    if(evens[2] != 0){
         printf("%d", odds[0] + odds[1]);
    }

    else if(odds[2] != 0){
        printf("%d", evens[0] + evens[1]);
    }

   else{
    if(evens[0] + evens[1] >= odds[0] + odds[1]){
        printf("%d", evens[0] + evens[1]);
    }
    else{
        printf("%d", odds[0] + odds[1]);
    }
   }



    return 0;
}
