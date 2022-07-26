#ifndef _NAMED_POINT_H_
#define _NAMED_POINT_H_
    #include<stdio.h>
    #include<stdlib.h>
    #include<math.h>

    typedef struct NamedPoint named_point_t;
    
    named_point_t* make_named_point(double x, double y, char* name);
    void set_name(named_point_t *p, char *name);
    char* get_name(named_point_t* p);
#endif