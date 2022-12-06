//step1: take T number of test case
//step2: take T number of N (length of tosses) input .
//step3: take tosses and count T and H for N times
//step4: if T > H then pakistan
//step5: else England
#include<stdio.h>
#include<string.h>
int main(){
    int T, N, i, j, head, tail;
    char tosses[20];
    scanf("%d", &T);
    for(i = 0; i < T; i++){
        scanf("%d\n", &N);

        fgets(tosses, sizeof(tosses), stdin);
        //scanf("%s", &tosses);
        printf("%d", tosses[0]);
        //puts(tosses);
        head = 0;
        tail = 0;
        for(j = 0; j < N; j++){
            if(tosses[j] == 'H'){
                head++;
            }
            else{
                tail++;
            }
        }
        if(head > tail){
            printf("%s\n", "England");
        }
        else{
            printf("%s\n", "Pakistan");
        }

    }
    return 0;
}
