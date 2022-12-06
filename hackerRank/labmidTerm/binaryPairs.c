//array input nibo
//if array[j] == '0' then if array[j+1] == '1' then count + 1
//else array[j] == '1' then array[j+1' == '0' then count + 1
//return count
#include<stdio.h>
int main(){
    int T, N,i,j;

    scanf("%d", &T);
    //printf("take test case input: %d", T);
    char binaryString[1000];
    for(j = 0; j< T; j++){

        scanf("%d", &N);
        //printf("take n input: %d", N);
        //fgets(binaryString, sizeof(binaryString), stdin);

        scanf("%s", &binaryString);
        //printf("binary string input : %s", binaryString);
        //printf("string:%s", binaryString);
        //printf("stringlen: %d", strlen(binaryString));
        int count = 0;
        for(i = 0; i< strlen(binaryString) -1 ; i++){
                if (binaryString[i] == '0'){
                    if(binaryString[i+ 1] == '1'){
                    count++;
            }
        }
        else{
            if(binaryString[i+1] == '0'){
                count++;
            }
        }

        }

        printf("count: %d", count);

        }


    return 0;

}
