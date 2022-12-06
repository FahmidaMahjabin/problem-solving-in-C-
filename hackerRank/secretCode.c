//problem check if the number is prime then it's secret.
//step1: take number of test cases T
//step2: take T numbe of  input n from user
//step3: divide n by (2 to root(n) ) if n is divisible by any number then print "Yes"
//step4: else "No"
#include<stdio.h>
#include<math.h>
int main(){
    int T, n, i, j, isPrime;
    scanf("%d", &T);

    for(j = 0; j< T; j++){
        scanf("%d", &n);
        isPrime = 1;
        if(n == 1){
            printf("%s\n", "No" );
        }
        else{
            for(i = 2 ; i<= sqrt(n) ; i++){
            if (n % i == 0){
                isPrime = 0;
                break;
            }
            }
            if(isPrime){
            printf("%s\n", "Yes" );
            }
            else{
            printf("%s\n", "No");
            }

        }


    }
    return 0;
}
