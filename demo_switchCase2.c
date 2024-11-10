#include <stdio.h>
int main()
{
    int data;
    char cdata;
    puts("请输入一个数");
    scanf("%d",&data);
    switch(data){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            puts("满足了1、2、3、4、5的情况");
            break;
        case 6:
            puts("满足了6的情况");
            break;
        case 7:
            puts("满足了7的情况");
            break;
        default:
            puts("其他非列表中的情况");
            break;
    }
    
    printf("请输入一个字符\n");
    getchar();
    scanf("%c",&cdata);
    switch(cdata){
        case 'a':
            puts("满足了条件a的情况");
            break;
        case 'b':
            puts("满足了条件b的情况");
            break;
        default:
        puts("其他非列表中的情况");
    }
    
    return 0;
}