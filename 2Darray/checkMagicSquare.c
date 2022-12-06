//problem = given a 3 X 3 matrix. prove it's a magic square matrix or not
// if all rows, columns and diagonal sum is same then it's a magic square
//step1: rowSum = 0; row er same valuer jonno column increase kore sum korbo.
//step2: row te first e jei rowSum pabo  seta magicValue te save kore rakhbo
//step3: every row te rowSum == magicValue kina check korbo. if not then break
//step4: every column eo same step2 and 3 korbo
//step5: for diagonal check i == j gulor jonno sum ber korbo
//step6: i+ j = row -1 er jonno sum check korbo

//int number1, number2 = 10;
#include<stdio.h>
int main(){
    int row = 3, col = 3, i, j, matrix[row][col];
    int isMagicSquare = 1, magicValue;

    for(i = 0; i< row; i++){
        for(j = 0; j< col; j++){
            //printf("i: %d j: %d and the input value is: ", i, j);
            scanf("%d", &matrix[i][j]);

        }
    }

    int principalDiagonalSum = 0, secondaryDiagonalSum = 0;
    for(i = 0; i< row; i++){
        int rowSum = 0;
        for(j = 0; j< col; j++){
            rowSum += matrix[i][j];
        }
        if(i == 0){
            magicValue = rowSum;
            printf("magicValue is %d", magicValue);
        }
        if (magicValue != rowSum){
            isMagicSquare = 0;
            break;
        }
    }
    for(i = 0; i < col; i++){
            int colSum = 0;
        for(j = 0; j< row; j++){
            colSum += matrix[i][j];

        }
        if(magicValue != colSum){
            isMagicSquare = 0;
            break;
        }
    }
    for( i = 0; i< row; i++){
        for(j = 0; j< col; j++){
            if(i == j){
                principalDiagonalSum += matrix[i][j];
            }
            if( i + j == row - 1){
                printf("i is: %d, j is: %d and the value: %d\n", i, i, matrix[i][j]);
                secondaryDiagonalSum += matrix[i][j];
            }
        }
    }
    printf(" principal diagonal: %d\n secondary diagonal: %d", principalDiagonalSum, secondaryDiagonalSum);
    if(principalDiagonalSum != magicValue || secondaryDiagonalSum != magicValue){
        isMagicSquare = 0;
    }
    if(isMagicSquare){
        printf("%s\n","Yes");
    }
    else{
        printf("%s\n", "No");
    }
    return 0;

}
