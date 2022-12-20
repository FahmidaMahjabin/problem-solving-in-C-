//take input n (size of the array)
//take array input and assign in pointer
//if a number has a 7 digit then count
//after all iteration if count7 >= ceil(length/2) then return beautiful
#include<stdio.h>
#include<math.h>
int hasDigit7(int number);
int main(){
    int n, i;
    scanf("%d", &n);
    int numbers[n], count7 = 0;
    for(i = 0; i< n; i++){
        scanf("%d", numbers+i);
        //printf("%d\n", numbers+i);
        if(hasDigit7(numbers[i])){
            count7++;
            //printf("count: %d\n", count7);

        }
    }
    if(count7 >= ceil(n/2)){
            return "Beautiful";
        }
    else{
            return "Ugly";
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
