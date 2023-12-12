#include <stdio.h>
#include "myString.h"
#include <string.h>

int main()
{
    char str1[5] ="hell";
    char* str2 ="ye";
    //myStrcpy(str1, str2);
   // strcpy(str1, str2);
    int ret = myStrcmp(str2, str1);
    printf("%s\n", str1);
    printf("%d\n", ret);
    return 0;
}