#include "../src/utility.c"
#include <cmocka.h>
#include <ctest.h>
#include <stdio.h>

static void null_test_success(void **state) {
  (void) state;
}
//
// int main(void) {
//   const struct CMunitTest tests[] = {
//     cmocka_unit_test(null_test_success)
//   };
//   return cmocka_run_group_test(tests, NULL, NULL);
// }

// Your actual test functions go here
CTEST(your_test_suite_name, test_example) {
    ASSERT_EQUAL(1, 1);  // Replace this with your actual test conditions
}

CTEST(your_test_suite_name, another_test) {
    ASSERT_EQUAL(2, 2);  // Another example test
}

// Add more test functions as needed

int main(int argc, const char *argv[]) {
    return ctest_main(argc, argv);  // Standard way to run CTest
}
