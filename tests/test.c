#include "../src/utility.c"
#include <cmocka.h>
#include <stdio.h>

static void null_test_success(void **state) {
  (void) state;
}

int main(void) {
  const struct CMunitTest tests[] = {
    cmocka_unit_test(null_test_success)
  };
  return cmocka_run_group_test(tests, NULL, NULL);
}

// void testCapitzalieFirstLetter() {
//   char[] testStr = "capitalize me";
//   char[] newStr = basalt.capitalizeFirstLetter(testStr);
//   if (newStr == "Capitzalie me") {
//     printf("Test passed Capitalize First Letter");
//     return;
//   }
//   printf("Test failed Capitalize First Letter, got %s", newStr);
// }
//
// int main() {
//   printf("Running tests...");
//   testCapitzalieFirstLetter();
//   printf("Tests finished");
// }
