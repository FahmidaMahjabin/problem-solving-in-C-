//function  = print a pyramid pattern
//step1: take input n . the line of the pyramid will be n
//step2:make an array of odd numbers of nth odd
//step3: let i = 1 to n, while i is odd
    //step3.1: print space (array[n] - array[i] )/2 ta
    //step3.2: then print "^" for array[i] times
    //step3.4: then print space (array[n] -array[i])/2 times

#include<stdio.h>
//int * makeAnOddSeries(int n);
int main() {
   int i, space, rows, k = 0;
   //printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
       k = 0;
      for (space = 1; space <= rows - i; ++space) {
         printf(" ");
      }

        while (k != 2 * i - 1) {
            if(i %2 == 0)
                printf("*");
            else
                printf("^");
            ++k;
      }


      printf("\n");
   }
   return 0;
}

//int * makeAnOddSeries(int n){
//    static int array[n];
//    int j = 1, oddValue = 1;
//
//    while(array[n] == 0){
//        array[j] = oddValue;
//        j++;
//        oddValue += 2;
//
//    }
//    return array;
//
//}
