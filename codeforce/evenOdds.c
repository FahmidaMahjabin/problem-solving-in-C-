//step1:n total number k half korbo and compare with k, if k > n/2 then the Kth number is even else odd
//step2:if odd then get the number by 2*k -1 cause it's odd
//step3:else even then get kth number by 2 * (k - n/2)
#include<stdio.h>
int main(){
    int n, k, middle;
    scanf("%d%d", &n, &k);
    if(n %2 == 0){
        middle = n /2;

    }
    else{
        middle = n/2 + 1;
    }
    if (k >middle){
        printf("%d", 2 * (n-middle));
    }
    else{
        printf("%d", 2 * k -1);
    }
    return 0;
}
