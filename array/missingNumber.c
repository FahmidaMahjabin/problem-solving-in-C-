//problem = find the missing number
//input = n (number of elements), (1 to n-1) where one will be missing
//output = missing number
//step1:declare an array with the same number of index as n and insert 0 for all
//step2: itterate over the input numbers one by one and insert 1 in that index of the array
//step3: if any of the index's value is 0 return that index value as missing number
#include<stdio.h>
int main(){
    int n, i, x, array[200000], missingNumber;
    scanf("%d", &n);
    for(i = 1; i <n; i++){
        scanf("%d", &x);
        array[x] = 1;
    }
    for(i = 1; i <= n; i++){
        if (array[i] != 1){
            missingNumber = i;
            break;
        }
    }
    printf("%d", missingNumber);
    return 0;
}

