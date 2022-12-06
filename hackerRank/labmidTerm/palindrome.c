//step1: jodi word er first theke and last theke iteratew kori tahole word er n/2 porjonto iterate korle sob letter same hobe palendrome
//step2: palindrome hole length >7 hole print word[0] + length -2 + word[length-1]
#include<stdio.h>
#include<string.h>
int main(){
    int T, i, j;
    char word[20];
    scanf("%d", &T);
    for(i = 0; i< T; i++){
        scanf("%s", &word);
        int length = strlen(word);
        int endingIndex = length-1;
        int isPalindrome = 1;
        //printf("%d", endingIndex);
        for(j = 0; j< length/2; j++){
            if(word[j] != word[endingIndex]){
                isPalindrome = 0;
                break;
            }
            else{
                endingIndex--;
            }

        }
        if(isPalindrome){
            if(length > 7){
                printf("Case #2: %c%d%c\n", word[0], length-2, word[length - 1]);
            }
            else{
                printf("Case #3: %s\n", word);
            }

        }
        else{
            printf("Case #1: %s\n", "Not Palindrome");
        }

    }
    return 0;
}
