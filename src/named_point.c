#include "named_point.h"

struct NamedPoint {
    double x, y;
    char *name;
};

named_point_t* make_named_point(double x, double y, char* name) {
    named_point_t *np = (named_point_t*) malloc(sizeof(named_point_t));
    if(np) {
        np->x = x;
        np->y = y;
        np->name = name;
    }
    return np;
}

void set_name(named_point_t *p, char *name) {
    if(p)
    {
        p->name = name;
    }
}

char* get_name(named_point_t* p) {
    return p->name;
}