//problem = find GCD of a and b
//step1: if a > b then find(b, a %b) till one of them is 0 then the other one is the GCD
#include<stdio.h>
int main(){
    int a, b, temp;
    scanf("%d%d", &a, &b);
    while(a > 0 && b > 0){
        if(a > b){
            temp = b;
            b = a % b;
            a = temp;

        }
        else{
            b = b % a;
        }
    }
    if(a == 0){
        printf("The GCD of a and b is %d", b);
    }
    else{
        printf("The GCD of a and b is %d", a);
    }
    return 0;
}
