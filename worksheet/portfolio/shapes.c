
#include <stdbool.h>
#include <math.h>
#include "shapes.h"

Point makePoint( float x, float y ) {
    // implementation
    Point p = {x, y};
    return p;
}

Line makeLine(Point p1, Point p2) {
    Line l;
    l.p[0] = p1;
    l.p[1] = p2;
    return l;
}

Triangle makeTriangle(Point p1, Point p2, Point p3) {
    Triangle t;
    t.p[0] = p1;
    t.p[1] = p2;
    t.p[2] = p3;
    return t;
}

float LineLength(Line l) {
    float dx = l.p[1].x - l.p[0].x
    float dy = l.p[1].y - l.p[0].y
    return sqrt(dx * dx + dy * dy);
}

float triangleArea(Triangle t) {
    float area = 0.5 * fabs(
        t.p[0].x * (t.p[1].y - t.p[2].y) +
        t.p[1].x * (t.p[2].y - t.p[0].y) +
        t.p[2].x * (t.p[0].y - t.p[1].y)
    );
    return area;
}

bool samePoint(Point p1, Point p2) {
    float dx = p1.x - p2.x;
    float dy = p1.y - p2.y;
    return sqrt(dx * dx + dy * dy) < 1.0e-6;
}

bool pointInLine(Point p, Line l) {
    return samePoint(p, l.p[0]) || samePoint(p, l.p[1]);
}

bool pointInTriangle(Point p, Triangle t) {
    return samePoint(p, t.p[0]) || samePoint(p, t.p[1]) || samePoint(p, t.p[2]);
}

// complete other functions below
// - start with stubs as above
// - compile regularly to test syntax
// - test functions by calling them from main()


