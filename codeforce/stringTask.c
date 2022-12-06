//step1: string er ekta kore letter iterate korbo
//step2: newString variable e rakhbo
//step3:if vowel then skip
//step4: else add "." then add the consonant letter
//step5:if uppercase then lower it with adding 32.
#include<stdio.h>
#include<string.h>
int main(){
    char word[102];
    int i;
    fgets(word, sizeof(word), stdin);
    for(i = 0; i< strlen(word) -1; i++){
        if(word[i] >= 'A' && word[i] <= 'Z'){
            word[i] += 32;

        }
        //printf("%c", word[i]);
        if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' ){
            continue;
        }
        else{
            printf(".%c", word[i]);

        }
    }

    return 0;
}
