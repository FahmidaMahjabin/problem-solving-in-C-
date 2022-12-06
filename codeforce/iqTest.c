//problem = find the evenness
//input = n number of inputs
//step1: list er ekta kore element itterate korbo
//step1: first, second, third 3 variables declare korbo
//step2: element k 2 diye divide kore dekhbo jodi even hoy then first e 1 save korbo else 0 save korbo
//step3: then second e same vabe 1 or 0 save hobe
//step4: jodi first and second == 1 hoy then look for next 0 for resultant = index + 1
//step5:jodi first and second == 0 hoy then look for next 1
//step6: jodi first == 1 and second == 0 or vice versa hoy then look for third.
    //step6.1:if third == 1 then get second's index + 1 as resultant
    //step6.2: else first's index + 1 is resultant

#include<stdio.h>
int main(){
    int n, i, numbers[100], first, second, third, resultant;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &numbers[i]);

    }
    if(numbers[0] % 2 == 0){
            first = 1;
        }
    else{
            first = 0;
        }
    if(numbers[1] % 2 == 0){
            second = 1;
        }
    else{
            second = 0;
        }
    if(first == second){
        if(first == 1){
            for(i = 2; i< n; i++){
                if(numbers[i] % 2 == 0){
                    resultant = i+1;
                }
            }

        }
        else{
            for(i = 2; i< n; i++){
                if(numbers[i] % 2 != 0){
                    resultant = i+1;
                }
            }

        }


    }
    else{
        if(numbers[2] % 2 == 0){

                //get odd's index
                if(first == third){
                    resultant = 2;
                }
                else{
                    resultant = 1;
                }

        }
        else{
            //get even's index
             if(first == third){
                    resultant = 2;
                }
                else{
                    resultant = 1;
                }


        }
    }
    printf("the evenness position is: %d", resultant);
    return 0;


}
