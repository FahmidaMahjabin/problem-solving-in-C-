//problem = given N number (positive or negative) , print 1 to N
//step1: initialize i = 1
//step2: check if N > 0 then incriment i upto N
    //step2.1: else, decrement i upto N
#include<stdio.h>
int main(){
    int i = 1, N;
    scanf("%d", &N);
    if( N > 0){
        for(i = 1; i <= N; i++){
            printf("%d ", i);
        }
    }
    else{
        for(i = 1; i >= N; i--){
            printf("%d ", i);
        }
    }
    return 0;
}
