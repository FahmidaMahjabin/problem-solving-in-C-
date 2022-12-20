#include<stdio.h>
int main(){
    FILE* inputFile;
    inputFile = fopen("input.txt", "r");
    printf("inputfile: %d", inputFile);
    char inFlie;
    FILE *outputFile;
    outputFile = fopen("output2.txt", "w") ;
    while(1){
        inFlie = fgetc(inputFile);
        if(inFlie == EOF){
            break;
        }
        printf("%c", inFlie);
        fputc(inFlie,outputFile );
    }
    fclose(inputFile);


    return 0;
}
