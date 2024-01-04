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
  free(test1);
  char *testString2 = "pls work bby";
  char *test2 = capitalizeFirstLetterASCII(testString2);
  printf("Test2 capitalizeFirstLetter: %s \n", test2);
  // free(testString);
  free(test2);
  char *testString3 = "haha bear";
  char *test3 = strSliceBeginningAt(testString3, 5);
  printf("Test3 strSliceBeginningAt: %s \n", test3);
  free(test3);
  char *test4 = strSliceEndingAt(testString3, 5);
  printf("Test4 strSliceEndingAt: %s \n", test4);
  free(test4);
  return 0;
}
