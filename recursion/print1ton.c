//step1: printf(n)
//step2:if i <= n then do step1.
#include<stdio.h>
int main(){
    int N;
    scanf("%d", &N);
    print1toN(1, N);
}
void print1toN(int i, int n){
    printf("%d", i);
    i++;
    if(i<= n){
        print1toN(i, n);
    }

}
