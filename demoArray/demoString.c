#include <stdio.h>

/* 它也是个常量 */
const int g_num = 10;
int main()
{
    /* 字符数组初始化定义的两种方式 */
    char buffer1[] = "helloworld";
    buffer1[0] = 'H';
    printf("buffer1:%s\n", buffer1);

    
    char * ptr ="helloworld";
    printf("ptr[0]:%c\t*(ptr+2):%c\n", ptr[1], *(ptr + 2));

    /* 为什么字符串不能改？ */
    ptr[0] = 'H';
    printf("ptr[0] = %c",ptr[0]);
    return 0;

}