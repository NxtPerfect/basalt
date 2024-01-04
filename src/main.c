#include "../include/utility.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  char *testString = "help pls";
  // testString = "help pls";
  // printf("%s \n", test);
  char *test1 = strAppendChar(testString, 'B');
  // test1 = strAppendChar(test, 'B');
  printf("Test1 appendChar: %s \n", test1);
  char *testString2 = "pls work bby";
  char *test2 = capitalizeFirstLetterASCII(testString2);
  printf("Test2 capitalizeFirstLetter: %s \n", test2);
  // free(testString);
  free(test1);
  free(test2);
  return 0;
}
