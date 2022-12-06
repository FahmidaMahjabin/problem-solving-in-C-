//problem = given a string S of small a to z. where a  = 1 to z  = 26 is the cost. now find out if the string cost is a power of 2.
//step1: string er ekta kore element niye 96 minus kore cost add korbo .
//step2: cost k 2 er power er sathe compare korbo jotokkhon na porjonto cost < 2^n
#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int i, cost = 0, n = 0;
    fgets(word, sizeof(word), stdin);
    int length = strlen(word);
    for(i = 0; i < length-1; i++){
        cost = cost + word[i] - 96;
        printf("%d", cost);
    }

    while(cost >= 2 ^ n){
        if(cost == 2^ n){
            printf("%s","Yes");
            return 0;

        }
        n++;

    }
    //printf("No");
    return 0;
}
