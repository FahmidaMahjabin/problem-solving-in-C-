#include<stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", getMax(a, b));
    return 0;
}
int getMax(int x, int y){
    int max = (x > y)? x : y;
    return max;
}
