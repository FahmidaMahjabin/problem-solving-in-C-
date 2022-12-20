#include<stdio.h>
int main(){
    int M, N, i, j;
    scanf("%d %d", &M, &N);
    int matrixA[M][N],  matrixB[M][N], matrixC[M][N];
    for(i = 0; i< M; i++){
        for(j = 0; j < N; j++){
            scanf("%d\n", &matrixA[i][j]);
        }
    }
    for(i = 0; i< M; i++){
        for(j = 0; j < N; j++){
            scanf("%d\n", &matrixB[i][j]);
        }
    }
    for(i = 0; i< M; i++){
        for(j = 0; j < N; j++){
            matrixC[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
    for(i = 0; i< M; i++){
        for(j = 0; j < N; j++){
            printf("%d ", matrixC[i][j]);
        }
        printf("\n");
    }
    return 0;
}
