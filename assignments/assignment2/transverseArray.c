//row colum value hobe and column row value hobe
#include<stdio.h>
int main(){
    int row = 3, col = 3, i , j, temporary;
    int matrix[row][col], transpose[col][row];
    for(i = 0; i< row; i++){
        for(j = 0; j< col; j++){
            scanf("%d", &matrix[i][j]);
            transpose[j][i] = matrix[i][j];



        }
    }
     for(i = 0; i< row; i++){
        for(j = 0; j< col; j++){
            printf("%d ", transpose[i][j]);

        }
        printf("\n");
    }
    return 0;
}
