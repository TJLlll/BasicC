#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    /* 如何获取数组有多少给元素： 数组的总长度 / 每个元素的长度 */
    char array[BUFFER_SIZE] = { 0 };


    int arrayLen = sizeof(array);
    printf("len:%d\n", arrayLen);

    int elementLen = sizeof(array[0]);
    printf("len:%d\n", elementLen);


    int lenth = arrayLen / elementLen;
    printf("lenth:%d\n", lenth);
#endif
#if 0
    /* 字符数组 */
    /* Q1：什么叫字符？ */
    char pNum = 'a';
    printf("pNum:%c\n", pNum);
    
    /* 只要是指针的变量，变量定义第一个需要是p开头. */
    char * ptr = "hello world";
    printf("ptr:%s\n", ptr);


    char buffer[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'd'};
    int buflen = sizeof(buffer);
    printf("buflen:%d, buffer:%s\n", buflen, buffer);
#endif

    /* 字符数组定义的两种方式 */
    char buffer1[] = "helloworld"; 
    /* 结尾自动默认分配'\0' */
    char buffer2[] = {'h', 'e', 'l', 'l', 'o', 'w', 'o', 'r', 'l', 'd'};
    /* 需要手动在结尾加/0 ，不会自动加'\0' */
    int buflen1 = sizeof(buffer1);
    int buflen2 = sizeof(buffer2);

    printf("&buflen1:%p, &buflen2:%p, &buflen3:%p\n", buflen1, buffer2);


    printf("buflen1:%d, buflen:%d\n", buflen1, buffer2);
    printf("buflen1:%d, buflen:%d\n", buflen1, buffer2);
    return 0;
}