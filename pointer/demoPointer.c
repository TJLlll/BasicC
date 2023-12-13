#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 100
/* 指针 */
int main()
{
#if 0
    //1.指针怎么定义
    //基础数据类型
    /* 定义变量（任意类型）记得初始化 */
    int a = 0;
    long b = 0;

    /* 指针的定义 */
    int *p = NULL;  /* 暂时未存放指针定义的定义，防止未初始化出现段错误 */
#endif

#if 0 /* 一级指针和二级指针 */
    /* 指针的使用:指针内存存放的是某变量的地址 */
    int a = 5;
    int *p = &a;
    /* 地址 */
    printf("a:%d\n", a);
    printf("&a:%p\n",&a); /* 地址占位符p */
    printf("*(&a):%d\n", *(&a));

    /* 一级指针 */
    printf("*p = %d\n", *p);
    printf("p = %p\n", p);
    printf("&p:%p\n",&p);

    /* 二级指针 */
    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n", *ptr);  /*  *ptr为&a  */
    printf("**ptr:%d\n", (*(*ptr))); /*   **ptr为*(&a),也为*p   */

    /* 通过二级指针来修改a的值，用两次取地址符号**      */
    **ptr = 1;
    printf("a = %d\n", a);


#endif

#if 0   /* 指针的特性1 : 指针占用的内存大小是8个字节（64位操作系统）（32位是4个字节）*/
    
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 55;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("p:%c, p:%d\n", *ptr, *ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*(&a): %d\n", *(&a));
    printf("*ptrInt:%d\n", *ptrInt);

    len = sizeof(ptrInt);
    printf("len:%d\n", len);

#endif

#if 1   /* 指针的特性2 : 指针和字符串 */
    char * ptr1 = "hello world";
    int len = sizeof(ptr1);
    printf("len:%d\n", len);

    /* Q1:怎么获取字符串的长度 */

    int length = strlen(ptr1);
    printf("length:%d\n", length);

    /* Q2: 字符串数组的赋值*/
    char name[BUFFER_SIZE] = { 0 };
    //strcpy(name, "zhangsan");
    *name = "h";
    printf("name:%s\n", name);

//     /* Q3: 给字符串赋值 */
//     char *ptr2 = NULL;
// #if 0
//     ptr2 = "zhangsan";
// #else
//     strcpy(ptr2, "zhangsan");
// #endif
//     printf("ptr:%s\n", ptr2);

#endif

#if 0  /* 堆空间 */
    /* void*是一个指针，这个指针被称为万能指针 */
    char *ptr2 = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr2, "zhangsan");
    printf("ptr:%s\n", ptr2);

#endif
    return 0;
}
