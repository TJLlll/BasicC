#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    int array[BUFFER_SIZE] = { 0 };

    /* 数组的越界访问 */
    /* 判断索引的有效性 : 索引必须是合理的范围*/
    printf("array[-1]: %d\n", array[-1]);
    printf("array[10]: %d\n", array[10]);
    printf("array[10]: %d\n", array[15]);
#endif


#if 0
    /* 静态数组：优势和劣势 */
    int desk[BUFFER_SIZE] = { 0 };

    /* 动态数组 */    
    /* 算法：
        自动扩容
        自动缩容
     */
#endif

#if 1
    /* 字符数组 */
#endif
    return 0;
}