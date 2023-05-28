#include <cstdio>
#include <cmath>

struct point
{
    double x, y;
};
double div(point p1, point p2)
{
    return sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));
}
int main()
{
    point p1, p2, p3;
    scanf("%lf%lf%lf%lf%lf%lf", &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y);
    printf("%.2lf", div(p1, p2)+div(p1, p3)+div(p2, p3));
    return 0;
}