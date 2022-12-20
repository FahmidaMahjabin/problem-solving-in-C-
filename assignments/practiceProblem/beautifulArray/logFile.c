#include<stdio.h>
int main(){
    FILE* logFile;
    logFile = fopen("logfile.txt", "a");
    if(logFile == NULL){
        fprintf(logFile, "\nit's open  at 3.44pm");
    }

    return 0;

}
