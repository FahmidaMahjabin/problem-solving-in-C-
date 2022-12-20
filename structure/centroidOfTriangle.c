// triangle has three points
// get the centroid
#include<stdio.h>

struct Point{
    float x;
    float y;
};

struct Triangle{
    struct Point A;
    struct Point B;
    struct Point C;
};

struct Point getCentroid(struct Triangle triangle){
    struct Point centroid;
    centroid.x = (triangle.A.x + triangle.B.x + triangle.C.x) / 3;
    centroid.y = (triangle.A.y + triangle.B.y + triangle.C.y) / 3;
    printf("%f %f\n", centroid.x,  centroid.y );
    return centroid;
}
int main(){
    struct Point p1 = {3, 5};
    struct Point p2 = {10.0, 4};
    struct Point p3 = {2.7, 3};
    struct Triangle triangle1 = {p1, p2, p3} ;
    struct Point centroid = getCentroid(triangle1);
    printf("point p1: %p\n", p1);
    printf("%f %f", centroid.x, centroid.y);
    return 0;

}
