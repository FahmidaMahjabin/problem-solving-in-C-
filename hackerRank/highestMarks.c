//problem = find the difference with the highest marks
//step1: take n input and make an array of scores of n number
//step2: find the highets score of all the numbers
//step3: then find difference beteween the highest score and ith score
#include<stdio.h>
int main(){
    int N, i, scores[101], highest;
    scanf("%d", &N);
    for(i = 0; i< N; i++){
        scanf( "%d", &scores[i]);
    }
    highest = scores[0];
    for(i = 0; i< N; i++){
        if(scores[i] > highest){
            highest = scores[i];
        }
    }
    printf("highest %d", highest);
    for(i = 0; i< N; i++){

        printf("%d ", highest - scores[i]);
    }

}
