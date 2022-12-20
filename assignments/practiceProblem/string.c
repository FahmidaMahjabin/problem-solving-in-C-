#include<stdio.h>
int main(){
    char string[] = "amivalo";
    string[0] = 'b';
    string[3] = 'c';
    printf("%s", string);
    return 0;
}
