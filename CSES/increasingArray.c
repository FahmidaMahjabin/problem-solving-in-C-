//problem = print how many moves needed to take to make the array increasing order
//input = n(number of array), array elements
//step1: array er first element k previous variable e rakhbo and second take next variable e rakhbo
//step2: compare if previous > next then increase next+1 and move++ till  previous == next
//step3:print moves
#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int  previous, current, moves = 0;
    long long int numbers[200000];
    for(i = 0; i< n; i++){
        scanf("%d", &numbers[i]);
    }

    for(i = 1; i<n; i++){
        if(numbers[i-1]> numbers[i]){
            moves += numbers[i-1] - numbers[i];
            numbers[i-1]+= moves;
        }

    }
    printf("%d", moves);
    return 0;
}
