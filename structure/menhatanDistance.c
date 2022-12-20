//make a structure of point
//then find absolute distance of x and y direction

#include<stdio.h>
#include<math.h>
struct Point{
    float x;
    float y;
};

float getMenhatanDistance(struct Point point1, struct Point point2){
    return abs(point1.x - point2.x) + abs(point1.y - point2.y);


}
int main(){
    struct Point p1 = {3.4, 7.0};
    struct Point p2 = {2, 5.0};
    float distyance =(float) getMenhatanDistance(p1, p2);
    printf("%f", distyance);
}
