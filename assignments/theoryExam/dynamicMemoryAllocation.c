#include<stdio.h>
#include<stdlib.h>
int main(){
    int N, i;
    scanf("%d", &N);
    int* arrayPointer =(int*) malloc( N * sizeof(int));
    for(i = 0; i< N; i++){
        scanf("%d", (arrayPointer + i));
        printf("%d\n", *(arrayPointer+ i));
    }
}
