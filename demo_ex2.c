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

//请使用switch case来编写程序

#include <stdio.h>

int main()
{
    int spatium;
    int discount;

    printf("please enter spatium：");
    scanf("%d",&spatium);

    switch(spatium/250){
        case 0:
            discount=0;
            break;
        case 1:
            discount=2;
            break;
        case 2:
        case 3:
            discount=5;
        case 4:
        case 5:
        case 6:
        case 7:
            discount=8;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            discount=10;
            break;
        default:
            discount=15;
            break;
    }
        
    printf("discount is：%.2f\n",(float)discount/100);
    printf("discount is：%d%%\n",discount);

    return 0;
}