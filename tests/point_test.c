#include<criterion/criterion.h>
#include "../src/point.h"


Test(point,create_point_test) {
    point_t *p = create_point(1,2);
    cr_assert_not_null(p);
}
