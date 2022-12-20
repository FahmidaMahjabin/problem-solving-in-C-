//step1: iterate over the string
//step2: if index odd then print the letter once
//step3: else print twice
#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    scanf("%s", &word);
    printString(word);
    return 0;

}

void printString(char word[]){
    int i;
    for( i = 0; i<strlen(word); i++){
        if(i % 2 != 0){
            printf("%c%c", word[i], word[i]);
        }
        else{
            printf("%c", word[i]);
        }
    }
}
