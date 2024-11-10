#include <stdio.h>

int main()
{
    int times;
    times = 10;

    while (times){  //while(times)的条件检查是times是否为非零，只要times不为0，这个条件就成立，while循环就一直执行
                    //避免死循环，到一定程度能满足退出条件。除c51单片机代码
        puts("我爱你");
        printf("%d\n",times);
        times = times - 1;
    }
    
    return 0;
}

