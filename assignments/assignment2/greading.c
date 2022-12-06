#include<stdio.h>
int main(){
    printf("%s", getGrade(56));
}
void getGrade(int number){
    if(number >= 80 && number <= 100){
        printf("A");
    }
    else if(number >= 60 && number <= 79){
        printf("B");
    }
    else if(number >= 40 && number <= 59){
        printf("C");
    }
    else{
        printf("F");
    }

}
