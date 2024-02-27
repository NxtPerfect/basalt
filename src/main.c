#include "../include/utility.h"
// #include "../munit/munit.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

void test_get_size_simple(char *str) {
  assert(getSizeOfString(str) == 6);
}

void test_get_size_empty_str() {
  char *str = "";
  assert(getSizeOfString(str) == 0);
}

void test_append_char_simple(char *str) {
  assert(equals(appendChar(str, 'B'), "help plsB"));
}

void test_append_char_empty_str() {
  char *s = NULL;
  s = appendChar(s, 'B');
  assert(equals(s, "B\0"));
  free(s);
}

void test_capitalize_first_letter_ascii_simple(char *str) {
  assert(equals(capitalizeFirstLetterASCII(str), "Pls work bby"));
}

void test_capitalize_first_letter_ascii_empty_str() {
  char *s = NULL;
  s = capitalizeFirstLetterASCII(s);
  assert(s == NULL);
  free(s);
}

void test_unique_chars_simple(char *str) {
  assert(equals(uniqueChars(str), "pls workby"));
}

void test_unique_chars_empty() {
  char *s = NULL;
  s = uniqueChars(s);
  assert(s == NULL);
  free(s);
}

void test_count_char_simple(char *str) { assert((countChar(str, 'p') == 2)); }

void test_count_char_empty() { assert((countChar(NULL, 'a') == 0)); }

void test_strip_simple(char *str) { assert(equals(strip(str), "plsworkbby")); }

void test_strip_empty() {
  char *s = NULL;
  s = strip(s);
  assert(s == NULL);
  free(s);
}

// Not implemented yet
void test_join_simple(char *strL, char *strR, char sep) {
  assert(equals(join(strL, strR, sep), "help pls&pls work bby"));
}

void test_join_empty_left(char *strR, char sep) {
  assert(equals(join(NULL, strR, sep), "&pls work bby"));
}

void test_join_empty_right(char *strL, char sep) {
  assert(equals(join(strL, NULL, sep), "help pls&"));
}

void test_join_empty_seperator(char *strL, char *strR) {
  assert(equals(join(strL, strR, NULL), "help plspls work bby"));
}

int main(int argc, char *argv[]) {
  printf("Starting tests...\n");

  printf("Testing getSizeOfString...\t");
  test_get_size_simple("Biggus");
  test_get_size_empty_str();
  printf("Passed\n");

  char *testString = "help pls";
  printf("Testing appendChar...\t");
  test_append_char_simple(testString);
  test_append_char_empty_str();
  printf("Passed\n");

  char *testString2 = "pls work bby";
  printf("Testing uniqueChars...\t");
  test_unique_chars_simple(testString2);
  test_unique_chars_empty();
  printf("Passed\n");

  printf("Testing countChar...\t");
  test_count_char_simple(testString);
  test_count_char_empty();
  printf("Passed\n");

  printf("Testing strip...\t");
  test_strip_simple(testString2);
  test_strip_empty();
  printf("Passed\n");

  printf("Testing join...\t");
  test_join_simple(testString, testString2, '&');
  test_join_empty_left(testString2, '&');
  test_join_empty_right(testString, '&');
  test_join_empty_seperator(testString, testString2);
  printf("Passed\n");

  // TODO
  printf("Testing toUpper...\n");
  // TODO
  printf("Testing toLower...\n");
  // TODO
  printf("Finished testing with success!\n");
  return 0;
}
