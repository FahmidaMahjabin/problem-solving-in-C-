//step1: check if each friends height < = fench height then width += 1 else width += 2
#include<stdio.h>
int main(){
    int n, h,i, a, width = 0;
    scanf("%d%d", &n, &h);
    for(i = 1; i <= n; i++){
        scanf("%d", &a);
        if( a > h){
            width += 2;
        }
        else{
            width += 1;
        }

    }
    printf("%d", width);
    return 0;
}
