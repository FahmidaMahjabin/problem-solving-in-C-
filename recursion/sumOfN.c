//let sum   = 0, i = 1
//step2: if (i<n) then sum += sum
//else return
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    int sum = getSumofN(N,1);
    printf("%d", sum);
}
int getSumofN(int N, int i){
    if(i  <= N){

        int sum = getSumofN(N, i+1);

        return sum + i;
    }
    else
        return 0;
}
