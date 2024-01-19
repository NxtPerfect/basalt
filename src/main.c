#include "../include/utility.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *testString = "help pls";
  // testString = "help pls";
  // printf("%s \n", test);
  char *test1 = appendChar(testString, 'B');
  // test1 = strAppendChar(test, 'B');
  printf("Test1 appendChar: '%s' == 'help plsB' \t%s \n", test1, (equals(test1,"help plsB")) ? "true" : "false");
  free(test1);
  char *testString2 = "pls work bby";
  char *test2 = capitalizeFirstLetterASCII(testString2);
  printf("Test2 capitalizeFirstLetterASCII: '%s' == 'Pls work bby' \t%s \n", test2, (equals(test2,"Pls work bby")) ? "true" : "false");
  // free(testString);
  free(test2);
  char *test3 = uniqueChars(testString2);
  printf("Test3 uniqueChars: '%s' == 'pls workby' \t%s \n", test3, (equals(test3, "pls workby")) ? "true" : "false");
  free(test3);
  int test4 = countChar(testString, 'p');
  printf("Test4 countChar p: %d == 2 \t%s \n", test4, (test4 == 2) ? "true" : "false");
  char *test5 = strip(testString2);
  printf("Test5 strip: '%s' == 'plsworkbby' \t%s\n", test5, (equals(test5, "plsworkbby")) ? "true" : "false");
  free(test5);
  char *test6 = toUpper(testString);
  printf("Test6 toUpper: '%s' == 'HELP PLS' \t%s \n", test6, (equals(test6, "HELP PLS")) ? "true" : "false");
  free(test6);
  return 0;
}
