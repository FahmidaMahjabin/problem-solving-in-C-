//problem = ekta string of +- deya thakbe. maximum consequitive signs er count return korte hobe
//step1: count = 1 and second element theke count shuru korbo last porjonto
//step2: jodi element previous element er same hoy then countt+1
//step3: else compare with maxCount and count.
    //step3.1: if count > maxCount then maxCount = count and count = 0
//step4: return maxCount
#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, i, count = 1, maxCount = 0;
    char signs[100];
    scanf("%d", &N);
    scanf("%s", &signs);
    for(i = 1; i< N; i++){
        if(signs[i] == signs[i-1]){
            count++;
        }
        else{
            if(maxCount < count){
                maxCount = count;
            }
            count = 0;
        }

    }
    printf("%d", maxCount);
    return 0;
}

