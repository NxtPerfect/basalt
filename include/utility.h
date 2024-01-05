#pragma once
#include <stdbool.h>

int getSizeOfString(const char *str);
char *appendChar(const char *appendTo, const char c);
char *appendStr(char *appendTo, char *appendFrom);
char *copyStr(const char *original, char *copyTo);
char *sliceBeginningAt(const char *str, const int start);
char *sliceEndingAt(const char *str, const int end);
char *capitalizeFirstLetterASCII(char *str);
int countCharInString(char *str, char c);
int uniqueCharsInString(char *str);
char *stripStr(char *str);
char *toUpper(char *str);
char *toLower(char *str);
bool isAlphanumeric(char *str);
bool isOnlyNumbers(char *str);
bool isOnlyLetters(char *str);
bool isOnlySpecialCharacters(char *str);
bool containsStr(char *str, char *toContain);
