#include "point.h"

struct point {
    double x;
    double y;
};

point_t* create_point(double x, double y) {
    point_t *point = (point_t*) malloc(sizeof(point_t));
    if(point) {
        point ->x = x;
        point ->y = y;
    }
    else {
        printf("Failed to create point\n");
    }
    return point;
}

double distance(point_t *p1, point_t *p2) {
    double distance = -1;
    if (p1 != NULL && p2 != NULL) {
        double dx = p1->x - p2->x;
        double dy = p1->y - p2->y;

        double sq = ((dx*dx) - (dy*dy));
        distance = sqrt(sq);
    }
    return distance;
}