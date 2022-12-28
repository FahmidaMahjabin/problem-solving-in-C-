#include<stdio.h>
int main(){
    int sum, N;
    scanf("%d %d", &N, &sum);
    int expectedAns = (sum - N) / 2;
    printf("%d", expectedAns);
    return 0;

}
