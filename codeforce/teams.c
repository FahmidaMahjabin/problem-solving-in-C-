//problem = n ta question 3 jon ans korbe. ans 0 or 1 hobe . jodi 2+ jon 1 hoy then oita ans korbe. so koyta total ans korbe ?
//input = n and the array of n numbers of 3 people
//step1: take n input
//step2: n ta proti qus er jonno 3 ta kore input nibo and input value sum korbo
//step3:jodi sum >= 2 hoy then count += 1 korbo
//step4: count print korbo
#include<stdio.h>
int main(){
    int n, i, j,x, noOfAns = 0;
    scanf("%d", &n);
    for (i = 0; i<n; i++){
        int sum = 0;
        for(j = 1; j<= 3; j++){
            scanf("%d", &x);
            sum += x;
        }
        if(sum >= 2){
            noOfAns += 1;
        }
    }
    printf("%d", noOfAns);
    return 0;
}
