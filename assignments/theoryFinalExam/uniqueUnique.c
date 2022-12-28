//problem = string e unique character koyta ase ta ber korbo
//step1:string ta ascending order e sort korbo
//step2:index 1 to n porjonto ager index er element er sathe compare korbo
//step3: jodi same na hoy the count + 1
//step4:: return count
#include<stdio.h>
#include<stdlib.h>
void getSortedString(char string[], int length);
void swap(char* a, char* b);

int main(){
    int n, i,j, count = 0;
    scanf("%d", &n);
    char string[n];

    scanf("%s", &string);

    for(i = 0; i<n; i++){
        int isUnique = 1;
        for(j = 0; j<n; j++){
        if(string[i] == string[j] && i != j){
            isUnique = 0;
        }
       }
       if(isUnique){
        count++;
       }
    }


    printf("%d", count);
    return 0;
}

