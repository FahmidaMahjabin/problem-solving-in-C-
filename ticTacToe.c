#include<stdio.h>
#include<stdbool.h>
void PrintMatrix(int matrix[][3], int n);
int main(){
    int n = 3, i, j;
    int matrix[n][n];
    for(i = 1; i<= 3; i++){
        for(j = 1; j<= 3; j++){
            matrix[i][j] = -1;
        }
    }
    PrintMatrix(matrix, 3);
    bool player1 = true, player2 = false;
    char sign;
    while(true){
        if(player1){
        sign = 'X';
        makeAMove(matrix, sign);
        player1 = !player1;
        player2 = !player2;
    }
        else{
        sign = '0';
        makeAMove(matrix, sign);
        player1 = !player1;
        player2 = !player2;

    }

    }


    return 0;
}
//function = make a move
//step1:set player1 and player2 value as boolean opposite value.
//step2:take row and column value and a sign(X or 0) as parameter
//step3:put sign in the matrix at that row column position
//step4: if X then assign value 1 else 0 then set value 2.
//step4: change the player1 and player2 value
void makeAMove(int matrix[][3],char sign){
    printf("Enter row and column: \n");
    int row, column;

    if(sign == 'X'){
        flag1:
        scanf("%d %d", &row, &column);
        printf("Player1 turn X in %d , %d \n", row, column);
        if(matrix[row][column] != -1){
            printf("invalid position. Please enter valid position\n");
            goto flag1;
        }

        matrix[row][column] = 1;
    }
    else{
        flag2:
        scanf("%d %d", &row, &column);
        printf("Player2 turn 0 in %d , %d \n", row, column);
        if(matrix[row][column] != -1){
            printf("invalid position. Please enter valid position\n");
            goto flag2;
        }

        matrix[row][column] = 2;
    }
    PrintMatrix(matrix, 3);
}
void PrintMatrix(int matrix[][3], int n){

    int i, j;
    for(i = 1; i<= 3; i++){
        for(j = 1; j<= 3; j++){
            if(matrix[i][j] == -1)
                printf(" ");
            else if(matrix[i][j] == 1)
                printf("X");
            else if(matrix[i][j] == 2)
                printf("0");
            if(j < n)
                printf("\t|\t");
        }
        printf("\n");
        if(i <3) printf("________________________________________");
        printf("\n");
    }
}

//function = is winer (get who is winer player 1 or player 2 or nobody
//srtep1: check if same row has same value and the value is not -1 then return the value.
//step2:check if same column has same value and value is not -1 then return value else return -1
//step3: check diagonal wise, if nsame value and value not equal -1 then return value else -1
//step4: if value is 1 then player1 winer , else if value2 then player 2 winer else nobody winer
int isWinerInRow(int matrix[][3], n){
    int i;
    for(i = 1; i<= 3; i++){
        if(matrix[i][1] == matrix[i][2] && matrix[i][2] == matrix[i][3] && matrix[i][1] != -1){
            return matrix[i][1];
        }
    }
    return -1;

}

int isWinerInColumn(int matrix[][3], n){
    int i;
    for(i = 1; i<= 3; i++){
        if(matrix[1][i] == matrix[2][i] && matrix[2][i] == matrix[3][i] && matrix[1][i] != -1){
            return matrix[1][i];
        }
    }
    return -1;

}

int isWinerInDiagonal(int matrix[][3], n){
    int i;
    for(i = 1; i<= 3; i++){
        if(matrix[i][i] == matrix[2][i] && matrix[2][i] == matrix[3][i] && matrix[1][i] != -1){
            return matrix[1][i];
        }
    }
    return -1;

}




