//step1: check if row == column
    //step1.1: itterate to every element check if i + j = row -1
        //step1.1.1:then skip that
    //step1.2: else check if value == 0 then "not secondary diagonal"
    //step 1.3: print secondary diagonal matrix
//step2: else not secondary diagonal matrix
#include<stdio.h>
int main(){
    int row, column, i, j;
    scanf("%d %d", &row, &column);
    int array[row][column];
    int isDiagonal = 1;
    for(i = 1; i<= row; i++){
        for (j = 1; j <= column; j++){
            scanf("%d", &array[i][j]);
            if(row == column){

                if(i + j == row+1){
                    if(array[i][j] != 0){
                        continue;
                    }
                    else{
                        isDiagonal = 0;
                    }
                }
                else{
                    if(array[i][j] != 0){
                        isDiagonal = 0;
                    }
                }

            }
            else{
        printf("%s", "not secondary diagonal");
        }
        }




        }
        if(isDiagonal)
            {
                printf("%s", "secondary diagonal");
                }
        else{
            printf("%s", "not secondary diagonal");
                }
    return 0;
}
