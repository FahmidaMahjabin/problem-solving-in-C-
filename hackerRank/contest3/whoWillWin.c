#include<stdio.h>
int countRuns(char binaryRuns[]);
void getTheWinerAfterDraw();
int main() {
    int A, B;
    scanf("%d\n%d", &A, &B);
    if(A > B){
        printf("%s", "Argentina" );
    }
    else if(A < B){
        printf("%s", "Brazil" );
    }
    else{
        getTheWinerAfterDraw();
    }
    return 0;
}
//function getTheWinerAfterDraw
//step1: take two string input
//step2: count the string1 and string2 value
//step3: if string1 > string2 then print Argentina
//step4: else if string1 < string2 then print Brazil
//step5: else call the function again

void getTheWinerAfterDraw(){
    char player1[7], player2[7];
    scanf("%s", &player1);
    //fgets(player1, sizeof(player1), stdin);
    printf("player1: %s\n",player1);
    scanf("%s", &player2);
    //fgets(player2, sizeof(player2), stdin);
    printf("player2: %s\n",player2);
    int runsOfPlayer1 = countRuns(player1);
    int runsOfPlayer2 = countRuns(player2);
    if(runsOfPlayer1 > runsOfPlayer2){
        printf("%s", "Argentina" );
    }
    else if(runsOfPlayer1 < runsOfPlayer2){
        printf("%s", "Brazil" );
    }
    else{
        getTheWinerAfterDraw();

    }



}

//function = countRuns
//input = binary value string
//step1: count = 0
//step2: iterate over the string. if string[i] == '1' then count++
//step3: return count

int countRuns(char binaryRuns[]){
    int count = 0, i;
    for(i = 0; i< strlen(binaryRuns); i++){
        if(binaryRuns[i] == '1'){
            count++;
        }
    }
    return count;
}
