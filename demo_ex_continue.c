/*
题目：
要求输出100~200之间的不能被3整除的数
*/
//1. 用for和continue来实现
/*#include <stdio.h>

int main()
{
    int data;

    for(data = 100;data <= 200;data++){ 
        if(data %3 == 0){
            continue;
        }
        printf("%d  ",data);

    }
    return 0;
}
*/

//2. 用while和continue来编程实现
#include <stdio.h>

int main()
{
    int data = 100;

    while(data <= 200){ 
        if(data %3 == 0){
            data++;
            continue;
        }
        printf("%d  ",data);
        data++;
    }
    return 0;
}

