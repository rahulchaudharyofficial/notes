#include<criterion/criterion.h>
#include "../src/point.h"


Test(point,create_point_test) {
    point_t *p = create_point(1,2);
    cr_assert_not_null(p);
}

Test(point,point_distance_test) {
    point_t *p1 = create_point(1,2);
    point_t *p2 = create_point(3,4);
    cr_assert_not_null(p1);
    cr_assert_not_null(p2);

    double ad = distance(p1,p2);
    double ed = sqrt(8);
    cr_assert_eq(ad,ed);
}
