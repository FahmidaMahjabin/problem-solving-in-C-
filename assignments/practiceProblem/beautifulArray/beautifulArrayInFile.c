#include<stdio.h>
#include<math.h>
int hasDigit7(int number);
int main(){
    int n, i;
    FILE* inputFile;
    FILE* outputFile;
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    fscanf(inputFile, "%d", &n);
    int numbers[n], count7 = 0;
    for(i = 0; i< n; i++){
        fscanf(inputFile, "%d", numbers+i);
        //printf("%d\n", numbers+i);
        if(hasDigit7(numbers[i])){
            count7++;
            //printf("count: %d\n", count7);

        }
    }
    if(count7 >= ceil(n/2)){
            fprintf(outputFile,"Beautiful" ) ;
        }
    else{
            fprintf(outputFile,"Ugly" ) ;
        }
}

int hasDigit7(int number){
    while(number >0){
        if(number % 10 == 7){
            return 1;
        }
        else{
            number = number / 10;
        }
    }
    return 0;
}
