//problem = given N and M. print all numbers upto N that are divisible by M;
//step1: i = M and increment i by M upto N
#include<stdio.h>
int main(){
    int N, M, i;
    scanf("%d%d", &N, &M);
    for (i = M; i <= N; i+=M){
        printf("%d ", i);
    }
    return 0;
}
