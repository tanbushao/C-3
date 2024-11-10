/*
给出一百分制成绩，要求输出成绩等级'A'、'B'、'C'、'D'、'E'。
90分以上为'A',80~89分为'B',70~79分为'C',60~69分为'D',60分以下为'E'。
*/

#include <stdio.h>

int main()
{
    int score;

    printf("请输入分数：");
    scanf("%d",&score);

    switch (score/10){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("成绩等级为：E\n");
        break;
    case 6:
        printf("成绩等级为：D\n");
        break;
    case 7:
        printf("成绩等级为：C\n");
        break;
    case 8:
        printf("成绩等级为：B\n");
        break;
    case 9:
    case 10:
        printf("成绩等级为：A\n");
        break;
    default:
        printf("成绩非法\n");
        break;
    }

    printf("done!\n");

    return 0;
}