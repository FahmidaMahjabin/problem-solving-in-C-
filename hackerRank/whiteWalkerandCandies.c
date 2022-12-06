#include<stdio.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test, people, totalCandy, i, j, candyForPeople[10000], candy;
    scanf("%d", &test);
    for(i = 0; i< test; i++){
        scanf("%d%d", &people, &candy);
        int totalCandy = 0;

        for(j = 0; j< people; j++){
            scanf("%d", &candyForPeople[j]);
            totalCandy += candyForPeople[j];

        }
        printf("total candy: %d",totalCandy);
        if (totalCandy * 2 <= candy){
            printf("%s\n", "Yes");
        }
        else{
            printf("%s\n", "No");
        }
    }

    return 0;
}
