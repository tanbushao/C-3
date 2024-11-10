/*
题目：运输公司对客户计算运输费用。路程(skm)越远,每吨·千米运费越低。
标准如下：
    s<250        没有折扣
 250≤s<500        2%折扣
 500≤s<1000       5%折扣
1000≤s<2000       8%折扣
2000≤s<3000      10%折扣
3000≤s           15%折扣
*/

//请使用if else来编写程序

#include <stdio.h>

int main()
{
    float spatium;      //spatium是拉丁语中的路程的意思，数学和物理中常用符号“s”来表示路程
    int discount;

    printf("please enter spatium：");
    scanf("%f",&spatium);

    if(spatium < 250){
        discount = 0;
    }else if(spatium >= 250 && spatium < 500){
        discount=2;
    }else if(spatium >= 500 && spatium < 1000){
        discount=5;
    }else if(spatium >= 1000 && spatium < 2000){
        discount=8;
    }else if(spatium >= 2000 && spatium <3000){
        discount=10;
    }else{
        discount=15;
    }

    printf("discount is：%.2f\n",(float)discount/100);
    printf("discount is：%d%%\n",discount);
    return 0;
}