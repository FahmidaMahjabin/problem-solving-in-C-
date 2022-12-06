#include<stdio.h>
#include<string.h>

int main(){
    char sentence[100];
    fgets(sentence, sizeof(sentence), stdin);
    puts(sentence);
    //char sentence[10] = 'hey there';
    int i,noOfCharacters, vowels = 0;
    //printf('%d', strlen(sentence));
    //printf('%c', sentence[0] );
    noOfCharacters = strlen(sentence) - 1;
    for(i = 0; i < noOfCharacters ; i++){
        printf('%c\n', sentence[i]);
        if(sentence[i] == 'a'){
            printf("%s", "in the loop");
            vowels++;
        }
        else if(sentence[i] == 'e'){
            vowels++;
        }
        else if(sentence[i] == 'i'){
            vowels++;
        }
        else if(sentence[i] == 'o'){
            vowels++;
        }
        else if(sentence[i] == 'u'){
            vowels++;
        }

    }

    printf("vowels: %d", vowels);
    return 0;
}
