/*
题目：使用switch case来实现，学生成绩分类。
85分以上为‘A等’，70~84分为‘B’等，60~69分为‘C’等
*/

#include <stdio.h>

int main()
{
    int score;
    printf("请输入学生成绩：");
    scanf("%d",&score);
    switch(score/10){
        case 10:                  //当成绩为100分
        case 9:                   //90~99分
            printf("A等\n");
            break;
        case 8:
            if(score >=85)        //判断85~89分为A等
                printf("A等\n");
            else                  //80~84分为B等
                printf("B等\n");
            break;
        case 7:                   //70~79分
            printf("B等\n");
            break;
        case 6:                   //60~69分
            printf("C等\n");
            break;
        default:                  //0~59分
            printf("不及格\n");
            break;
    }

    puts("done!");
    return 0;
}