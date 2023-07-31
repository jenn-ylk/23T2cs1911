#include <stdio.h>
#include <math.h>

typedef struct point Point;

struct point {
    double x;
    double y;
};

int readPoints(Point points[], int maxPoints) {
    int i = 0;
    while (
        i < maxPoints && 
        scanf("%lf%lf", &points[i].x, &points[i].y) == 2
    ) {
        i++;
    }
    return i;
}

void print_point(Point p) {
    printf("%.2lf, %.2lf\n", p.x, p.y);
}

// both struct types work, Point is just a typedef
double dist(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main(void) {
    Point p1 = {0, 0};
    Point p2 = {0, 0};
    // scan in the points
    printf("Enter the first point (x, y): ");
    scanf("%lf%lf", &p1.x, &p1.y);
    printf("Enter the second point (x, y): ");
    scanf("%lf%lf", &p2.x, &p2.y);
    printf("points:\n");
    print_point(p1);
    print_point(p2);

    // Calculate and print the distance
    printf("Distance between the points is %.2lf\n", dist(p1, p2));


    Point points[5];
    int scanned = readPoints(points, 5);
    printf("Scanned %d points\n", scanned);
    return 0;
}