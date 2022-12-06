#include<stdio.h>
#include<string.h>
int main(){
    char string1[10], string2[10];
    scanf("%s%s", &string1, &string2);
    char string3 = strcat(string1, string2);
    printf("string3: %s", string3);
    return 0;
}

