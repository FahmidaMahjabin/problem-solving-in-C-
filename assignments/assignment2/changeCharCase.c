//step1: if a letter is in between 'A' to 'Z' then add 32 and print
//step2:else -32 and print
#include<stdio.h>
#include<string.h>
int main(){
    char word[100];
    int i;
    scanf("%s", &word);
    for(i = 0; i< strlen(word); i++){
        //printf("letter: %c\n", word[i]);
        if(word[i] >= 'a' && word[i] <= 'z'){
            printf("%c", word[i]- 32);
        }
        else {
            printf("%c", word[i] +32);
        }
    }
    return 0;
}
