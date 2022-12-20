#include<stdio.h>

void swap(int* a, int* b);

int main(){
    int n,i;
    scanf("%d", &n);
    int numbers[n];
    int digits[] = {1, 4, 5, 9};
    swap(&digits[0], & digits[3]);
    for(i = 0; i< 4; i++){
        printf("%dth digit: %d",i, digits[i]);
    }
    for(i = 1; i<= n; i++){
        scanf("%d", &numbers[i]);
    }
    int queries, L, R;
    scanf("%d", &queries);
    for(i = 0; i< queries; i++){
        scanf("%d %d", &L, &R);
        swap(&numbers[L], &numbers[R]);

    }
    for(i = 1; i<= n; i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


