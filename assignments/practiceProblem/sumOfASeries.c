//problem = : take input n , find the sum upto n where first 3 are plus then second three minus alternative till n
//step1: take input n
//step2: i = 1 to n porjonto do step 3 to step5
//step3: sign = 1
//step4: counter j = 0 to j < 3 rakhbo. jodi j == 3 hoye jay then !sign
//step5: if sign then sum += i
//step6: else sum -= i

#include<stdio.h>
int main(){
    int n, sum = 0, i, j = 1;
    scanf("%d", &n);
    int sign = 1;
    //printf("%d", !sign);
    for(i = 1; i <=n; i++){
        if(sign ){
            sum += i;
            }
        }
        else{
            sum = sum -i;
            }
        }
        j++;
        if( j > 3){
            sign = !sign;
            j = 1;
            }
    printf("%d", sum);
    return 0;
}
