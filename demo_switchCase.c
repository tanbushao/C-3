#include <stdio.h>
int main()
{
    int data;
    puts("请输入一个数");
    scanf("%d",&data);
    switch(data){
        case 1:
            puts("满足了条件1的情况");
            break;
        case 2:
            puts("满足了条件2的情况");
            break;
        case 3:
            puts("满足了条件3的情况");
            break;
        case 4:
            puts("满足了条件4的情况");
            break;
        default:
            puts("其他非列表中的情况");
            break;
    }


    return 0;
}