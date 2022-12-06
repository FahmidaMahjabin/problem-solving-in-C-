//problem =  given 3 sides of a triangle, if it's possible to make triangle then print "Yes" else "No"
//step1: if sum of the two sidesis greater than the other side then it's a triangle
//step2: compare a + b > c
        //and, b + c > a
        //and c + a > b yes else No
#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if( a + b > c && b + c > a && c + a > b){
        printf("Yes");
    }

    else{
        printf("No");
    }
    return 0;
    }
