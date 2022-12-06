//step 1:compare if a == b ==c then return all are equal
//step 2:else,
    //step 2.1: if a == b ,
            //step 2.1: compare if a > c then return a and b is greatest
            //step 2.1.1: else c is largest
    //step 2.2: if b == c
            //step 2.2.1: compare b > a then return b and c largest
            //step 2.2.2: else a is largest
    //step 2.3: if c == a
            //step 2.3.1: compare c > b then return c, a are largest
            //step 2.3.2: else b is largest
    //step 2.4: if a > b
            //step 2.4.1: if a > c then return a is greatest
                //step 2.4.1.1: else c is greatest
    //step 2.5: if b > c
            //step 2.4.1: if b > a then return b is greatest
                //step 2.4.1.1: else a is greatest
    //step 2.6: if c > a
            //step 2.4.1: if c > b then return c is greatest
                //step 2.4.1.1: else b is greatest



#include<stdio.h>
int main(){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if(a == b && a == c){
        printf("all are equal");
    }
    else{
       if (a == b){
        if (a > c){
            printf("a and b greatest");
        }
        else{
            printf("c is greatest");
        }
       }
       if (b == c ){
        if (b > a){
            printf("b and c greatest");
        }
        else{
            printf("a is greatest");
        }
       }
       if (c == a){
        if( c > b){
            printf("c and a are greatest");
        }
        else{
            printf("b is greatest");
        }
       }
       else if( a > b){
        if(a > c){
            printf("a is greatest");
        }
        else{
            printf("c is greatest");
        }
       }
       else if(b > c){
        if (b > a){
            printf("b is greatest");
        }
        else{
            printf("a is greatest");
        }
       }
       else if(c > a){
        if (c > b){
            printf("c is greatest");
        }
        else{
            printf("b is greatest");
        }
       }
    }

    return 0;
    }
