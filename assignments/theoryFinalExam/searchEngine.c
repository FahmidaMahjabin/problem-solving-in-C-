//step1:take testCases
//step2: in a testCase take n (array size)
//step2: take array input starting from index 1 to n
//step4:take s that we are lookig for
//step5:if found the number in array then return then index
//step6: else "Not Found"
int main(){
    int testCases, i, n,j, number;
    scanf("%d", &testCases);
    for(i = 1; i<= testCases; i++){
        scanf("%d", &n);
        int array[n];
        for(j = 1; j<= n; j++){
            scanf("%d", &array[j]);
        }
        scanf("%d", &number);
        int positionOfNumber = isFound(array, n, number);
        if(positionOfNumber!= -1){
            printf("Case %d: %d", i, positionOfNumber);
        }
        else{
            printf("Case %d: Not Found", i);
        }
    }
    return 0;
}

int isFound(int array[], int n, int number){
    int i;
    for(i = 1; i<=n; i++){
        if(array[i] == number){
            return i;
        }
    }
    return -1;
}
