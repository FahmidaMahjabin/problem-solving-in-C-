#include<stdio.h>
void printNto1(int n);
int main(){
    int N;
    scanf("%d", &N);
    printNto1(N);
    return 0;

}
void printNto1(int n){

    if(n <1)
        return;
    printf("%d", n);
    printNto1(n--);
}
