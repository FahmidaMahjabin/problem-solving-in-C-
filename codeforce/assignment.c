#include<stdio.h>
int main(){
    int a, b, c, d, largest, smallest;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if( a> b){
        largest = a;
        smallest = b;
    }
    else{
        largest = b;
        smallest = a;
    }
    if(largest < c){
        largest = c;
        if(smallest > largest){
            smallest = largest;
        }
    }
    else{
        if(smallest > c){
            smallest = c;
        }
    }
    if(largest < d){
        largest = d;
        if(smallest > largest){
            smallest = largest;
        }
    }
    else{
        if(smallest > d){
            smallest = d;
        }
    }
    printf("Largest= %d  \n Smallest = %d", largest, smallest);
    return 0;
}
//find largest and smallest among 4 numbers
//step1: take 4 inputs a, b, c, d
//step2: if a > b
    //step2.1: largest = a and smallest = b
//step3: else largest = b and smallest = a
//step4: if largest < c:
    //step4.1: largest = c
    //step 4.2: if smallest > largest
        //step4.2.1: smallest = largest
//step 5: else
    //step5.1: if smallest > c
        //step5.1.1: smallest = c
//step 6: if largest < d;
    //step6.1: largest = d;
    //step6.2: if smallest > largest
        //step 6.2.1: smallest = largest
//step 7: else
    //step 7.1: if smallest > d
        //step 7.1.1: smallest = d

