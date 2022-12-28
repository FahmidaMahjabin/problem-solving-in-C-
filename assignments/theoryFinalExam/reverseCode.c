//step1: number input nibo
//step2: number % 10 kore last er digit pabo
//step3: last digit + 64 kore eke character e represent korle reverse code hobe
//step4: number = 0 na howa porjonto korbo

#include<stdio.h>
int main(){
    int testCase, i, number, lastDigit;
    scanf("%d", &testCase);
    for(i = 0; i< testCase; i++){
        scanf("%d", &number);
        while(number > 0){
            lastDigit = number % 10;
            number = number / 10;
            printf("%c", lastDigit+64);

        }
        printf("\n");
    }

}
