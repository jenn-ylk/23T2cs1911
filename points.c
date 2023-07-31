#include <stdio.h>
#include <math.h>

typedef struct point Point;

struct point {
    double x;
    double y;
};

void print_point(Point p) {
    printf("%lf, %lf\n", p.x, p.y);
}

// both struct types work, Point is just a typedef
double dist(Point p1, struct point p2) {
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main(void) {
    Point p1;
    Point p2;
    // scan in first point
    printf("Enter the first point ");
    scanf("%lf%lf", &p1.x, &p1.y);
    printf("Enter the second point: ");
    scanf("%lf%lf", &p2.x, &p2.y);

    printf("points:\n");
    print_point(p1);
    print_point(p2);

    printf("Distance is %.2lf\n", dist(p1, p2));

    return 0;
}