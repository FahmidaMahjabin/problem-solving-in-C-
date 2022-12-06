//problem  = given a string. if a letter's decimal is even then make it uppercase
//step1: iterate over the string and conver a letter to decimal
//step2: if the letter value is divisible by 2 then conver it to uppercase
#include<stdio.h>
#include<string.h>
int main(){
    char inputString[100];
    scanf("%s", &inputString);
    int i;
    for(i = 0; i< strlen(inputString); i++){
        if(inputString[i] % 2 == 0){
            inputString[i] -= 32;
        }

    }
    printf("%s", inputString);
}
