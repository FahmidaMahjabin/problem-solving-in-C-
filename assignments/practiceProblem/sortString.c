#include<stdio.h>
#include<string.h>
void sortString(char string[], int length);
void swap(int* a, int* b);
int main(){
    char string[100];
    scanf("%s", &string);
    int length = strlen(string);
    //printf("length: %d", length);
    int a = 5, b = 7;
    swap( &a, &b);
    sortString(string, length);
    return 0;
}

void sortString(char string[], int length){
    int i, j, maxIndex = 0;
    for(i = 0; i< length-1  ; i++){
        int maximum = string[i];
        for(j = i+1; j< length; j++){
            if(maximum < string[j]){
            maximum = string[j];

            maxIndex = j;

        }
        }
        printf("maximum is: %c\n", maximum);
        swap(&string[maxIndex], &string[i]);
        //sortedString[i] = maximum;
        //printf("%c", maximum);


    }
    printf("length: %d\n", length);
    for( i = 0; i< length; i++){
        printf("%c",string[i]);
    }
    //printf("string[2]: %c\n", string[2]);
    return 0;

}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

