//input = test case T, T number of input percent
//step1: take T inputs and charges[100] array for T inputs
//step2: if charges  < 60 then time = 20* 3 + 20 * 2 + (60 - charges ) *1
//step2:if charges  <80 then time = 20 * 3 + 2 * (80 - charges )
//step3: if charges  >= 80 then time = (100-charges ) * 3
#include<stdio.h>
int main(){
    int T, i, charges, time;
    char percent;
    scanf("%d", &T);
    for(i = 0; i< T; i++){
        scanf("%d%c", &charges, &percent);
        //printf("%d ", charges);
        if(charges  < 60){
                time = 20 * 3 + 20 * 2 + (60 - charges ) * 1;

        }
        else if(charges  < 80){
            time = 20 * 3 + (80 - charges ) * 2;
        }
        else{
            time = (100 - charges ) * 3;
        }
        printf("%d minutes\n", time);
    }

    return 0;
}
