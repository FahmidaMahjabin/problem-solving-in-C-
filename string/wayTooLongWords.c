//step1: input string er length check korbo > 10 kina
//step2: choto hole string print korbo
//step3: else first character then jotogulo word ase ta count kore bosthabo then last character
#include<stdio.h>
#include<string.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i = 0; i <n; i++){
        char inputWord[100];
        fgets(inputWord, sizeof(inputWord), stdin);
        int length = strlen(inputWord)-1;
        if( length > 10){
            printf("%c%d%c", inputWord[0], length - 2, inputWord[length -1]);



        }
        else{
        printf("%s", inputWord);
        }

    }
    return 0;


}o
