#include "../include/utility.h"
#include "../munit/munit.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

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

int main(int argc, char *argv[]) {
  printf("Starting tests...\n");

  char *testString = "help pls";
  printf("Testing appendChar...\n");
  test_append_char_simple(testString);
  test_append_char_empty_str();

  char *testString2 = "pls work bby";
  printf("Testing uniqueChars...\n");
  test_unique_chars_simple(testString2);
  test_unique_chars_empty();

  printf("Testing countChar...\n");
  test_count_char_simple(testString);
  test_count_char_empty();

  printf("Testing strip...\n");
  test_strip_simple(testString2);
  test_strip_empty();

  printf("Testing join...\n");
  test_join_simple(testString, testString2, '&');
  // TODO
  printf("Testing toUpper...\n");
  // TODO
  printf("Finished testing with success!\n");
  return 0;
}
