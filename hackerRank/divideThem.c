//input = N (no. of students and the roll number), Kth index
//step1:ekta kore roll number nibo and array te (k+1) theke n porjonto all roll nnumber boshabo then 1 to k porjonto boshabo
#include<stdio.h>
int main(){
    int N, roll, i, K;
    int listOfRolls[21];
    scanf("%d", &N);
    for(i = 1; i <= N; i++){
        scanf("%d", &roll);
        listOfRolls[i] = roll;
    }
    //printf("%d", listOfRolls);
    scanf("%d", &K);

    for(i = K+1; i<= N; i++){
        printf("%d ", listOfRolls[i]);

    }
    for(i = 1; i<= K; i++){
        printf("%d ", listOfRolls[i]);

    }
    return 0;

}
