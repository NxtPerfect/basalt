#pragma once
#include <stdbool.h>

int getSizeOfString(const char *str);
char *appendChar(const char *appendTo, const char c);
char *appendStr(char *appendTo, char *appendFrom);
char *copyStr(const char *original, char *copyTo);
char *sliceBeginningAt(const char *str, const int start);
char *sliceEndingAt(const char *str, const int end);
char *capitalizeFirstLetterASCII(char *str);
int countChar(const char *str, const char c);
char *uniqueChars(const char *str);
char *strip(char *str);
char *join(char *str, char *secondStr, char seperator);
/* Currently works only for ascii
 * Make it UTF-8 compatible by default
 * and special ASCII version
 */
char *toUpper(char *str);
/* Same as toUpper
 * Similiar code
 */
char *toLower(char *str);
bool isAlphanumeric(char *str);
bool isOnlyNumbers(char *str);
bool isOnlyLetters(char *str);
bool isOnlySpecialCharacters(char *str);
bool containsStr(char *str, char *toContain);
/* Implemented by first checking it's size
 * then checks character by character
 * maybe optimize it by checking the last ones?
 * as we know the length are different
 * we can use that information
 * If both strings are null return true
 * if only one, returns false
 * else compares string char by char
 */
bool equals(char *strL, char *strR);
