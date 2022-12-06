//problem = print time from time M to N where N could be small.
//step1: check if M > N then print M to N with 1 increment step
//step2:else, when i == 24 then make i == 0 and print upto N with 1 increment.
#include<stdio.h>
int main(){
    int M, N, i;
    scanf("%d%d", &M, &N);
    if( M <= N){
        for(i = M; i <= N; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i = M; i <24; i++){
            printf("%d ", i);
        }
        for(i = 0; i <= N; i++){
            printf("%d ", i);
        }
    }
    return 0;

}

