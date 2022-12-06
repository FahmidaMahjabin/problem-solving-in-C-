//step1: take test case T input .
//step2: take T times of N (number of array element )
//step3: closestTo100 = array[i]
//step4: compare if array[i] < array[i+ 1] then closestTo100 = array[i+ 1]
//step5: print closestTo100
#include<stdio.h>
int main(){
    int T, N, i,j, runs[11];
    scanf("%d\n", &T);
    for(i = 0; i< T; i++){
        scanf("%d\n", &N);

        scanf("%d ", &runs[0]);
        int closestTo100 = runs[0];
        for(j = 1; j< N; j++){
            scanf("%d ", &runs[j]);
            if(runs[j] > closestTo100){
                closestTo100 = runs[j];
            }

        }
        printf("%d\n", closestTo100);
    }
}
