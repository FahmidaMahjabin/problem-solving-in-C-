#include<stdio.h>
int main(){
    int numbers[16], i = 0;
    numbers[0] = 1;
    printf("%d ", numbers[0]);
    for(i = 1; i < 15; i++){
        numbers[i] = 2 * numbers[i - 1];
        printf("%d ", numbers[i]);

    }
    return 0;
}
