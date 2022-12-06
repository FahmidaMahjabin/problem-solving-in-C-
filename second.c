#include<stdio.h>
int main(){


    int convertToAscii(char character){


        printf("character is: %c", character);
        int asciiOfCharacter = character;
        printf("%c = %d",character, asciiOfCharacter);
        return 0;
    };
    char x = "A";
    printf(convertToAscii(x));

}
