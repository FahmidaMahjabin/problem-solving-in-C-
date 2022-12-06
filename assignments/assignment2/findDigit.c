//function = findOneDigit
//input = a string of digits
//output = 1 if present else 0
//step1: check one by one character if it's the given digit
//step2: if it matches with the digit then return 1
//step3: if no matches then after all iteration return 0

#include<stdio.h>
#include<string.h>
int findDigit(char word[], int digit);
int main(){
    char word[100];
    scanf("%s", &word);
    int get1 = findDigit(word, 1);

    int get9 = findDigit(word, 9);

    int get7 = findDigit(word, 7);

    if(get1 && get9 && get7){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

int findDigit(char word[], int digit){
    int i;
    for(i = 0; i< strlen(word); i++){
        if((word[i] - 48) == digit){
            return 1;
        }
    }
    return 0;
}
