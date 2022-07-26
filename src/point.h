#ifndef _POINT_H_
#define _POINT_H_
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>

    typedef struct point point_t;

    point_t* create_point(double x, double y);
    double distance(point_t *p1, point_t *p2);
    
#endif