#include "../src/point.h"
#include "../src/named_point.h"
#include<criterion/criterion.h>

Test(point, named_point_test) {
    named_point_t *p1 = make_named_point(1.0,1.0,"origin");
    named_point_t *p2 = make_named_point(3.0,3.0,"upper_right");
    cr_assert_not_null(p1);
    cr_assert_not_null(p2);

    double actual_dist = distance((point_t*) p1, (point_t*) p2);
    double expected_dist = sqrt(8);
    cr_assert_eq(actual_dist,expected_dist);    
    
}