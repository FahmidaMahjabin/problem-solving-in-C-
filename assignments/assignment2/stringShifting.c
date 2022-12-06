#include<stdio.h>
int main(){
    printf("%c", stringShifting("smiley", 5));
    return 0;
}
void stringShifting(char string[], int shiftingNumber){
    int i;
    for(i = 0; i< strlen(string); i++){
        int shiftedChar = string[i] + shiftingNumber;
        if( shiftedChar >= 97 && shiftedChar <= 122){
            printf("%c", shiftedChar);
        }
        else{
            printf("%c", shiftedChar -122 + 96);
        }
    }

}
