//step1: take a string input
//step2: iterate over the string from first to last
//step3: let minimum = string[i]
//step4: from i+1 to n , if minimum > string[j] then minimum = string[j] and minIndex = j
//step5: swap the minimum with the ith element
//step6: do step4 and 5 for all the elements

#include<stdio.h>
#include<string.h>
int main(){
    char string[100];
    scanf("%s", &string);
    int length = strlen(string);
    //printf("length: %d\n", length);
    //printf("string: %s\n", string);
    getSortedString(string, length);

}

void getSortedString(char string[], int length){
    int i, j, minimumIndex;
    char minimum;
    for(i = 0; i< length-1; i++){
        minimum = string[i];
        minimumIndex = i;
        for(j = i+1; j< length; j++){
            if(minimum > string[j]){
                minimum = string[j];
                minimumIndex = j;
            }
        }
        //printf("string[i] %c , string[minimumIndex] %c\n",string[i], string[minimumIndex] );
        swap(&string[i], &string[minimumIndex]);

    }
    for(i = 0; i< length; i++){
        printf("%c", string[i]);
    }
}

void swap(char* a, char* b){
    char temp = *a;
    *a = *b;
    *b = temp;
}
