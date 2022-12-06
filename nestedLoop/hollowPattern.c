//problem = make a hollow box
//input = box height = h, width = w
//height = line number, width = ek line e first e and last e j koyta star thakbe
//step1:line 0 to h porjonto print korte hobe
//step2: line 1 and line h hole w ta star print hobe
//step3:onno line hole first e star and last e star and shob gulo space hobe
#include<stdio.h>
int main(){
    int n, i, j;
    scanf("%d", &n);
    for(i = 1; i<= n; i++){
        if(i == 1){
             for(j = 1; j <= n; j++){
            printf("%d", j);
        }
        }
        else if(i == n){
            for(j = 1; j<= n; j++){
                printf("%d", n);
            }
        }
        else{
            for(j = 1; j <= n; j++){
            if(j == 1){
                printf("%d", i);
            }
            else if(j == n){
                printf("%d", n);
            }
            else{
                printf(" ");
            }
        }

        }

        printf("\n");
    }
    return 0;
}
