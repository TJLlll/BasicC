#include <stdio.h>

int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world";
#if 1
    /* Q1:字符串常量？ 什么叫字符串常量 */
    /* 1.打印字符串的每一个字符 */
    /* way1：使用for循环的方式 */
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for (int idx = 0; idx < strlen(ptr); idx++)
    /* 此处strlen(ptr)中的指针ptr一直在++，因此len一直在减，
    因此这个循环不会打印完ptr指向的字符串，在下面的同样的代码中，
    idx < strlen(ptr)改成了 idx < len，可以全部打印 */
    {
        p = *ptr; 
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
        printf("strlen(ptr): %ld\n", strlen(ptr));
    }
#else
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for (int idx = 0; idx < len; idx++)
    {
        p = *ptr; 
        printf("p:%c, idx:%d\n", p, idx);
        ptr++;
    }
#endif

    return 0;
}