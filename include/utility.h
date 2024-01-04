#pragma once

int getSizeOfString(const char *str);
char *strAppendChar(const char *appendTo, const char c);
char *strAppendStr(char *appendTo, char *appendFrom);
char *copyStr(const char *original, char *copyTo);
char *strSliceBeginningAt(const char *str, const int start);
char *strSliceEndingAt(const char *str, const int end);
char *capitalizeFirstLetterASCII(char *str);
