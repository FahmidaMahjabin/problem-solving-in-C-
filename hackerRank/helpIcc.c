#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T, i, j, runs[6];
    scanf("%d\n", &T);

    for(i = 0; i < T; i++){
        int isMaiden = 1;
        for(j = 0; j < 6; j++){
            scanf("%d\n", &runs[j]);
            if(runs[j] != 0){
                isMaiden = 0;
                break;

            }
        }
        if(isMaiden){
            printf("%s", "Yes\n");
        }
        else{
            printf("%s", "No\n");

        }

    }
    return 0;
}
