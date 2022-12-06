#include<stdio.h>
int main() {
    int N, M, i, j;
    scanf("%d%d", &N, &M);
    int array[N][M];
    for(i = 1; i<= N; i++){
        for(j = 1; j <= M; j++){
            scanf("%d", &array[i][j]);
            if(array[i][j] == i && array[i][j] == j){
                array[i][j] += 3;
            }
            else if(array[i][j] == i){
                array[i][j] += 2;

            }
            else if(array[i][j] == j){
                array[i][j] += 1;

            }
        }
    }
    for( i = 1; i<= N; i++){
        for(j = 1; j<= M; j++){
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;

}
