#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN = 2,
    QUIT = 3,
};

/* 宏定义 */
/* 代码规范：宏必须全部大写 */
#define COUNT_NUM   100
#define RANGE_NUM   200
int main()
{
#if 0

    int budget = 50;

    int applephone = 8999; 
    int mi14Pro = 4399;
    int huaweiP60 = 6000;


    if (budget > applephone)
    {
        printf("get a applephone!\n");
    }
    else if (budget > mi14Pro)
    {
        printf("get a mi14Pro!\n");
    }
    else (budget > huaweiP60);
    {
        printf("get a huaweiP60");
    }

#endif


#if 0
    int budget = 50;
    int minbudget = 4000;
    int maxbudget = 6000;

    int applephone = 8999; 
    int mi14Pro = 4399;
    int huaweiP60 = 6000;
    

    if (budget < applephone || budget > mi14Pro)  /* 或,这里" < "," > "比||的运算级高，因此不需要将两边的条件括起来 */
    {
        printf ("i am happy, get a phone\n");
    }
    else
    {
        printf ("i am sad, no phone\n");
    }

    if ((minbudget < budget) && (budget < maxbudget)) /* 且 */
    {
        printf ("success get a phone\n");
    }
    else
    {
        printf ("error get a phone\n");
    }
#endif

/* 代码规范：一个函数尽量不要超过80行 最多不要超过120行. */
#if 0
    /* 每个case要有一个break */
    int choice = 0;
    printf("请输入你的选项:");
    scanf("%d",&choice);

    switch (choice)
    {
    case REGISTER:
        {
        /* 如果case里面的语句过多，一定要加上{}来包含 */
        printf("welcome to register\n");
        }
        break;
    case LOGIN:
        {
        printf("welcome to login\n");
        break;
        }
    case QUIT:
        {
        printf("welcome to quit\n");
        }
        break;
    default:        /* 当case不存在时，执行default */
        printf("iput choice invalid\n");
        break;
    }
#endif

#if 0
    srand(time(NULL));      /* 使用当前时间作为种子，确保每次运行程序时生成不同的随机数序列 */


    /* 循环 */
    /* for循环 */

    /* 代码规范: 循环不允许用i */
    /* 代码规范：不允许使用魔鬼数字 */
    int randomNUM = 0;
    for (int idx = 0; idx < COUNT_NUM; idx++)
    {
        /* code */
        int randomNum = rand() % RANGE_NUM + 1; /* rand() % 100 生成0-199*/
        printf("randomNum:%d\n", randomNum);
    }
    

    /* 生成一个100以内的数 [1 - 100]*/
        int randomNum = rand() % COUNT_NUM + 1; /* rand() % 100 生成0-99*/
        printf("randomNum:%d\n", randomNum);

#endif

#if 0


    srand(time(NULL));

    /* 编码规范：变量尽量使用驼峰式命名 */
    int circleTimes = COUNT_NUM >> 1;    /* >> 相当于除2 */
    int randomNum = 0;
    int i = 1;
    while (--circleTimes)
    {
        randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d, i = %d\n", randomNum, i);
        i++;
    }
    
#endif

#if 1
       /* 用处常使用在宏函数中*/
    int varaNum = 0;
    do
    {
        
        printf("varaNum:%d\n", varaNum);
    } while (varaNum);
    

#endif


    return 0;
}