#include <stdio.h>
#include <stdlib.h>

int getSizeOfString(char *str) { return sizeof(str) / sizeof(str[0]); }

char *strAppendChar(char *appendTo, char c) {
  int len = getSizeOfString(appendTo);
  char *s = appendTo;
  s[len] = c;
  s[len + 1] = '\0';
  return s;
}

char *strAppendStr(char *appendTo, char *appendFrom) {
  int lenAppendTo = getSizeOfString(appendTo);
  int lenAppendFrom = getSizeOfString(appendFrom);
  char *s = appendTo;
  for (int i = lenAppendTo; i < (lenAppendTo + lenAppendFrom); i++) {
    s[i] = appendFrom[i];
  }
  return s;
}

char *strSliceBeginningAt(char *str, int start) {
  int len = getSizeOfString(str);
  char *s;
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
}

char *capitalizeFirstLetterASCII(char *str) {
  int size = sizeof(str) / sizeof(str[0]);
  char *res = "";
  for (int i = 0; i < size; i++) {
    if (96 < (int)(str[i]) < 123) {
      char *temp = strAppendChar(res, (char)((int)(str[i]) - 32));
      strAppendStr(temp, strSliceBeginningAt(str, i));
    }
  }
}

int main(int argc, char *argv[]) {
  char *test;
  return 0;
}
