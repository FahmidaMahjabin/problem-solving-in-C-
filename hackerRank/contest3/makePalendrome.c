#include<stdio.h>
#include<string.h>
int main(){
    int T, i, j;
    char word[20];
    scanf("%d\n", &T);
    for(i = 0; i< T; i++){
        fgets(word, sizeof(word), stdin);
        int length = strlen(word);
        int endingIndex = length-1;
        int numberOfMoves = 0;
        //printf("%d", endingIndex);
        for(j = 0; j< length/2; j++){
            if(word[j] != word[endingIndex]){
                numberOfMoves++;
                endingIndex--;

            }
            else{
                endingIndex--;
            }

        }
        printf("%d\n", numberOfMoves);
    }
}
