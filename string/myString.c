#include <stdio.h>
#include "myString.h"

int mystrlen(const char* str)
{
    if(!str)
    return 0;

    int idx = 0;
    while (str[idx] != '\0')
    {
        idx++;
    }
    return idx;
}

char* myStrcat (char* destination, const char* source)
{
    int idx1 = 0;
    while(destination[idx1] != '\0')
    {
        idx1++;
    }

    int idx2 = 0;
    while (source[idx2] != '\0')
    {
        destination[idx1] = source[idx2];
        idx1++;
        idx2++;
    }

    destination[idx1] = '\0';
    return destination;
}

void myStrcpy(char* destination, const char* source)
{

    while(*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}

int myStrcmp(const char* destination, const char* source)
{
    while (*destination != '\0' && *source != '\0') 
    {
        if (*destination < *source) 
        {
            return -1;
        } 
        else if (*destination > *source) 
        {
            return 1;
        }
        
        destination++;
        source++;
    }
    /* 前一个字符串短 */
    if (*destination == '\0' && *source != '\0') 
    {
        return -1;
    } 
    else if (*destination != '\0' && *source == '\0') 
    {
        /* 后一个字符串短 */
        return 1;
    }

    return 0;
}