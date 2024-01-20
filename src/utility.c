#include "../include/utility.h"
#include <stdio.h>
#include <stdlib.h>

// Gets size of string as int
int getSizeOfString(const char *str) {
  int len = 0;
  while (str[len] != '\0') {
    len++;
  }
  return len;
}

// Appends character to the end of string
char *appendChar(const char *appendTo, const char c) {
  if (appendTo == NULL) {
    char *res = NULL;
    res = malloc(2 * sizeof(char));
    if (res == NULL) {
      return NULL; // If malloc fails
    }
    res[0] = c;
    res[1] = '\0';
    return res;
  }
  int len = getSizeOfString(appendTo);
  char *res = NULL;
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
char *appendStr(char *appendTo, char *appendFrom) {
  int lenAppendTo = getSizeOfString(appendTo);
  int lenAppendFrom = getSizeOfString(appendFrom);
  char *res = NULL;
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
char *sliceBeginningAt(const char *str, const int start) {
  int len = getSizeOfString(str);
  char *s = malloc(len - start);
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
    return appendChar(&str[start], str[start + 1]);
  }
  for (int i = start; i < len; i++) {
    s[i - start] = str[i];
  }
  return s;
}

// Returns slice of string ending at given index
char *sliceEndingAt(const char *str, const int end) {
  int len = getSizeOfString(str);
  char *s = malloc(len - end);
  if (len == 0) {
    return s;
  }
  if (end >= len) {
    return s;
  }
  if (end + 1 == len) {
    return &str[end];
  }
  if (end + 2 == len) {
    return appendChar(&str[end], str[end + 1]);
  }
  for (int i = 0; i < end; i++) {
    s[i] = str[i];
  }
  return s;
}

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
  res = copyStr(str, res);
  for (int i = 0; str[i] != '\0'; i++) {
    if ((str[i] >= 'a') && (str[i] <= 'z')) {
      res[i] = res[i] - ('a' - 'A');
      break;
    }
  }
  return res;
}

/* Counts how many times char occurs in string
 * return 0 if none found, else returns int
 * time complexity O(n)
 */
int countChar(const char *str, const char c) {
  if (str == NULL)
    return 0;
  int howMany = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != c) {
      continue;
    }
    howMany++;
  }
  return howMany;
}

/* Returns list of all unique characters in string
 * time complexity O(n^2)
 */
char *uniqueChars(const char *str) {
  int index = 0;
  if (str == NULL) {
    return NULL;
  }
  char *characters = malloc(getSizeOfString(str));
  if (characters == NULL) {
    return NULL;
  }
  // If str[i] is in characters[j] then it's in there, continue
  // else we add it to index, as that's our last element
  for (int i = 0; str[i] != '\0'; i++) {
    bool inArr = false;
    for (int j = 0; j < index; j++) {
      if (str[i] == characters[j]) {
        inArr = true;
        break;
      }
    }
    if (!inArr) {
      characters[index] = str[i];
      index++;
    }
  }
  return characters;
}

char *strip(char *str) {
  if (str == NULL)
    return NULL;
  int index = 0;
  char *res = malloc(getSizeOfString(str));
  if (res == NULL) {
    return NULL;
  }
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] != ' ' && str[i] != '\n') {
      res[index] = str[i];
      index++;
    }
  }
  return res;
}

// TODO: Needs implementation
char *join(char *str, char *secondStr, char seperator) {
  if (str == NULL && secondStr == NULL)
    return NULL;
  // if (seperator == NULL) // TODO Hm what to do if seperator is NULL?
  if (str == NULL) {
    int l = getSizeOfString(secondStr);
    char *res = malloc(l + sizeof(char) * 2);
    res[0] = seperator;
    for (int i = 1; i < l; i++) {
      res[i] = secondStr[i];
    }
    res[l] = '\0';
  }
  char *res = malloc(getSizeOfString(str) + getSizeOfString(secondStr) +
                     (sizeof(char) * 2));
  if (res == NULL) {
    return NULL;
  }
  return str;
}

char *toUpper(char *str) {
  int len = getSizeOfString(str);
  char *res = malloc(len);
  int diff = 'a' - 'A';
  for (int i = 0; i < len; i++) {
    if (str[i] > 'z' || str[i] < 'a') {
      res[i] = str[i];
      continue;
    }
    res[i] = str[i] - diff;
  }
  return res;
}

char *toLower(char *str) {
  int len = getSizeOfString(str);
  char *res = malloc(len);
  int diff = 'a' - 'A';
  for (int i = 0; i < len; i++) {
    if (str[i] > 'Z' || str[i] < 'A') {
      res[i] = str[i];
      continue;
    }
    res[i] = str[i] + diff;
  }
  return res;
}

bool equals(char *strL, char *strR) {
  if (strL == NULL && strR == NULL) {
    return true;
  }
  if (strL == NULL || strR == NULL) {
    return false;
  }
  int lenL = getSizeOfString(strL);
  int lenR = getSizeOfString(strR);
  if (lenL != lenR)
    return false;
  for (int i = 0; i < lenL; i++) {
    if (strL[i] != strR[i])
      return false;
  }
  return true;
}
