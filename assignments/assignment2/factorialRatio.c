#include<stdio.h>
int getFactorial(int n);
float getRatio(int a, int b);
int main(){
    printf("%.2f", getRatio(8, 6));
    return 0;
}
float getRatio(int a, int b){
    return getFactorial(a) / getFactorial(b);
}
int getFactorial(int n){
    int factorial = 1, i;
    for(i = 1; i<= n; i++){
        factorial *= i;
    }
    return factorial;
}
