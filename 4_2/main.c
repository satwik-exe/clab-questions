#include <stdio.h>
#include <math.h>

struct Point{
    int x;
    int y;
};
typedef struct Point Point;
double distance(Point a, Point b);
int main(){
    Point a,b;
    printf("Enter the coords: ");
    scanf(" %d", &a.x );
    scanf(" %d", &a.y );
    scanf(" %d", &b.x );
    scanf(" %d", &b.y );
    printf(" %.2f\n", distance(a,b));
    return 0;
}
double distance(Point p, Point q){
    return sqrt(pow(p.x-q.x,2)+pow(p.y-q.y,2));
}