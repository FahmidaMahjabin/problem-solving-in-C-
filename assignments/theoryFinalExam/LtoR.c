//step1: take test cases
//step2: in one test case take L and R
//step3: from L to R check every number if it's a prime number
//step4: if prime number then print the number

int main(){
    int testCases, L, R, i, number;
    scanf("%d", &testCases);
    for(i = 0; i< testCases; i++){
        scanf("%d %d", &L, &R);
        for(number = L; number<= R; number++){
            if(isPrime(number)){
                printf("%d ", number);
            }
        }
        printf("\n");
    }
}

//function = isPrime
//if a number is divisible from 2 to the square root of that number then it's not a prime number
int isPrime(int number){
    int i;
    for(i = 2; i<= sqrt(number); i++){
        if(number % i == 0)
            return 0;
    }
    return 1;
}
