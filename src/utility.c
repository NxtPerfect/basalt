#include "../include/utility.h"
#include <stdio.h>

// Gets size of string
int getSizeOfString(char *str) { return (int)(sizeof(str) / sizeof(char)); }

// Appends character to the end of string
char *strAppendChar(char *appendTo, char c) {
  int len = getSizeOfString(appendTo);
  if (len == 0) {
    return &c;
  }
  char *s = appendTo;
  s[len] = c;
  s[len + 1] = '\0';
  return s;
}

// Appends one string to another
char *strAppendStr(char *appendTo, char *appendFrom) {
  int lenAppendTo = getSizeOfString(appendTo);
  int lenAppendFrom = getSizeOfString(appendFrom);
  if (lenAppendTo == 0) {
    return appendFrom;
  }
  if (lenAppendFrom == 0) {
    return appendTo;
  }
  char *s = appendTo;
  for (int i = lenAppendTo; i < (lenAppendTo + lenAppendFrom); i++) {
    s[i] = appendFrom[i];
  }
  return s;
}

// Returns slice of string from given index
char *strSliceBeginningAt(char *str, int start) {
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
char *strSliceEndingAt(char *str, int end) { return "WIP"; }

// Seg faults
char *capitalizeFirstLetterASCII(char *str) {
  size_t length = sizeof(str) / sizeof(char);
  char *res = "";
  for (int i = 0; i < length; i++) {
    if (96 < (int)str[i] < 123) { // One of these has to seg fault
      char *temp = strAppendChar(res, (char)((int)(str[i]) - 32));
      strAppendStr(temp, strSliceBeginningAt(str, i));
    }
  }
  return res;
}
