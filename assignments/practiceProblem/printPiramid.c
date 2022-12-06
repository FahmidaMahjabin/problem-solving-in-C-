//function = input e n joto thakbbe shei koyta # print korbe
//step1: 0 theke n porjonto ekta kore # print korbo pashapashi
void printNHash(int n){
    int i;
    for(i = 0; i < n; i++){
        printf("# ");
    }
}
int main(){
    int n, i;
    scanf("%d", &n);
    for(i = 1; i< n; i++){
        printNHash(i);
        printf("\n");

    }

}
