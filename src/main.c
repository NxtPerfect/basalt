#include "../include/utility.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *testString = "help pls";
  // testString = "help pls";
  // printf("%s \n", test);
  char *test1 = appendChar(testString, 'B');
  // test1 = strAppendChar(test, 'B');
  printf("Test1 appendChar: '%s' == 'help plsB'\n", test1);
  free(test1);
  char *testString2 = "pls work bby";
  char *test2 = capitalizeFirstLetterASCII(testString2);
  printf("Test2 capitalizeFirstLetterASCII: '%s' == 'Pls work bby'\n", test2);
  // free(testString);
  free(test2);
  char *test3 = uniqueChars(testString2);
  printf("Test3 uniqueChars: '%s' == 'pls workby'\n", test3);
  free(test3);
  int test4 = countChar(testString, 'p');
  printf("Test4 countChar p: %d == 2\n", test4);
  char *test5 = strip(testString2);
  printf("Test5 strip: '%s' == 'plsworkbby'\n", test5);
  free(test5);
  return 0;
}
