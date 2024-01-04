#include "../include/utility.h"
#include <stdio.h>
#include <stdlib.h>

// Gets size of string as int
int getSizeOfString(const char *str) {
  int len = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    len++;
  }
  return len;
}

// Appends character to the end of string
char *strAppendChar(const char *appendTo, const char c) {
  int len = getSizeOfString(appendTo);
  char *res;
  // If string is empty, return char
  if (len == 0) {
    res = malloc(2 * sizeof(char));
    if (res == NULL) {
      return NULL; // If malloc fails
    }
    res[0] = c;
    res[1] = '\0';
    return res;
  }
  // Allocate space for string + char
  res = malloc((len + 2) * sizeof(char));
  if (res == NULL) {
    return NULL;
  } // If malloc fails
  for (int i = 0; i < len; i++) {
    res[i] = appendTo[i];
  }
  res[len] = c;
  res[len + 1] = '\0';
  return res;
}

// Appends one string to another
char *strAppendStr(char *appendTo, char *appendFrom) {
  int lenAppendTo = getSizeOfString(appendTo);
  int lenAppendFrom = getSizeOfString(appendFrom);
  char *res;
  if (lenAppendTo == 0) {
    return appendFrom;
  }
  if (lenAppendFrom == 0) {
    return appendTo;
  }
  char *s = malloc(lenAppendTo + lenAppendFrom + 1);
  for (int i = lenAppendTo; i < (lenAppendTo + lenAppendFrom); i++) {
    s[i] = appendFrom[i];
  }
  s[lenAppendTo + lenAppendFrom + 1] = '\0';
  return s;
}

// Copies string contains from original to copyTo
char *copyStr(const char *original, char *copyTo) {
  int lenOriginal = getSizeOfString(original);
  copyTo = malloc(lenOriginal);
  for (int i = 0; original[i] != '\0'; i++) {
    copyTo[i] = original[i];
  }
  return copyTo;
}

// Returns slice of string from given index
char *strSliceBeginningAt(const char *str, const int start) {
  int len = getSizeOfString(str);
  char *s;
  if (len == 0) {
    return s;
  }
  if (start >= len) {
    return s;
  }
  if (start + 1 == len) {
    return &str[start];
  }
  if (start + 2 == len) {
    return strAppendChar(&str[start], str[start + 1]);
  }
  for (int i = start; i < len; i++) {
    s = strAppendChar(s, str[i]);
  }
  return s;
}

// Returns slice of string ending at given index
char *strSliceEndingAt(const char *str, const int end) { return "WIP"; }

/* Capitalizes first letter in a string, if it's ASCII
 * and if it's not already capitalized
 * else returns empty string
 * It goes through string until it finds letter
 * when it does, it capitalizes it and returns
 */
char *capitalizeFirstLetterASCII(char *str) {
  int lenStr = getSizeOfString(str);
  char *res = malloc(lenStr);
  // If malloc fails
  if (res == NULL) {
    return NULL;
  }
  printf("%s\n", str);
  res = copyStr(str, res);
  printf("%c\n", res[0]);
  for (int i = 0; str[i] != '\0'; i++) {
    if ((str[i] >= 'a') && (str[i] <= 'z')) {
      // this line segfaults
      res[i] = res[i] - ('a' - 'A');
      printf("%s\n", res);
      // strSliceBeginningAt(str, i)
      break;
    }
  }
  return res;
}
