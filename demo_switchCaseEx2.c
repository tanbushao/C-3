/*
题目：如果使用if else来实现呢，学生成绩分类。
85分以上为‘A等’，70~84分为‘B’等，60~69分为‘C’等
*/


#include <stdio.h>

int main()
{
    int score;
    printf("请输入一个整数：\n");
    scanf("%d", &score);

    if (score >= 85 && score <= 100) {
        printf("A等\n");
    } else if (score >= 70 && score <= 84) {
        printf("B等\n");
    } else if (score >= 60 && score <= 69) {
        printf("C等\n");
    } else {
        printf("不及格\n");
    }

    return 0;
}