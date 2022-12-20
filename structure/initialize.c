#include<stdio.h>
 struct Student{
 char name[30];
 int roll;
 double marks;
 };
int main(){
    struct Student s1, s2;
    scanf(" %s %d %lf", s1.name, &s1.roll, &s1.marks);
    printf(" name: %s,\n roll Number: %d,\n marks: %lf", s1.name, s1.roll, s1.marks);
}
