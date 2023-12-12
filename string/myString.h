#ifndef __MY_STRING_H
#define __MY_STRING_H

#include <stdio.h>

int mystrlen(const char* str);

char* myStrcat(char* destination, const char* source);

void myStrcpy(char* destination, const char* source);

int myStrcmp(const char* destination, const char* source);

#endif