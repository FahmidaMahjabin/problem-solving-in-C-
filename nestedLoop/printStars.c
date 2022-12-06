//print starts  5 stars in line 1 to 1 star in line 5
//step1: for printing five lines take i = 0 to i = n
//step2: in every line take j = 0 to n for printing the stars
#include<stdio.h>
int main(){
    int n, i, j, x;

    scanf("%d", &n);
    x = n;
    for(i = 0; i<n; i++){
        for(j = 0; j <= x; j++)
            {printf("* ");
            }
        x--;
        printf("\n");
        }

    return 0;

}
