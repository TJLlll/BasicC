#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE   32
/* 作业1 */
int main()
{
#if 0

    /* 字符数组 */
    char array[BUFFER_SIZE];
    /* 数组初始化 */
    memset(array, 0, sizeof(array));

    int len = sizeof(array);
    printf("len:%d\n", len);
#endif

#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE] = "hello word";
    int len = sizeof(array);
    printf("len:%d, array:%s\n", len, array);
#endif

#if 0   /* 把这四个函数的返回值和形参以及作用弄透彻 */
    /* 字符串（字符数组） */
    char array1[BUFFER_SIZE] = "hello world";
    /* 第一个 strlen */
    int len = strlen(array1);
    printf("len:%d\n", len);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);

    /* 第三个 strcat */
    strcat(name,"is a boy");
    printf("name:%s\n", name); /* 从数组中的/0位置开始写，用首字符替换字符串。*/

    /* 第四个 strcmp */
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name2, name);
    printf("ret:%d\n", ret);/* 比较的是ASC码 */
    
#endif

#if 0
    /* 字符串 */
    /* 指针出入 */
    char * ptr = "hello world";   /* 字符串常量 */
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n", len);
    printf("size:%ld\n",size);

    
    *(ptr + 1) = 'H';   /* 字符串常量不可更改 */
    printf("*ptr:%c\t*(ptr+1):%c\tptr:%s\n", *ptr, *(ptr+1), ptr);

#endif



    return 0;
}