#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

    /* 
    内存泄漏 : 3种场景
    1.野指针
    2.malloc出的堆空间没有被释放
    3.踩内存(read / write is invalid)
    */

int main()
{
#if 0
    /* Q1. 什么情况下会导致内存泄漏 */
    // case 1：野指针
    int a;
    printf("a:%d\n", a);
   
    int array[BUFFER_SIZE];
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

    char *p;
    printf("\n");

    //case2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if (!ptr)
    {
        /* todo... */
        /* 状态码 */
        return -1;
    }
    /* 使用malloc分配的空间，数据是脏的。（脏数据）*/
        memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
#if 0
    /* 极度危险的函数strcpy，容易修改数据，换成strncpy函数来替换它 */
    strcpy(ptr, "hello world");
    printf("ptr:%s\n, ptr");
#else
    /* 使用安全 */
    strncpy(ptr, "hello wordddddd", BUFFER_SIZE);
#endif

#if 1
    printf("ptr:%c\n", *ptr);
    /* */
    if(ptr !=NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    /* free()的规范写法 */
    if(ptr != NULL)
    {

        free(ptr);
        ptr =NULL;
    }

#endif
    return 0;
}