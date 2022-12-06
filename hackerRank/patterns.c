//problem = take input n and print a pattern to print a triangle with last arm 5 values from 1 to 5
//input = n
//step1: make n lines
//step2: in each line i.e ith line will have i to 1 values printed
#include<stdio.h>
int main(){
    int N, i, j;
    scanf("%d", &N);
    for(i = 1; i<= N; i++){
        for(j = i; j>=1; j--){
            printf("%d ", j);

        }
        printf("\n");
    }
    return 0;

}
