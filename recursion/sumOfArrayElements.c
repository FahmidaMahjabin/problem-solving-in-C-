#include<stdio.h>
int main(){
    int n, i;
    scanf("%d", &n);
    int array[n];
    for(i = 0; i<n; i++){
        scanf("%d", &array[i]);

    }
    int sum = sumOfArrayElements(array, n);
    printf("%d", sum);
}

int sumOfArrayElements(int array[], int n){
    if(n == 0)
        return 0;
    int sum = sumOfArrayElements(array + 1, n-1);
    return sum + array[0];

}
