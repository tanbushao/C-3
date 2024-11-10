/*
题目：
在全系1000学生中，征集慈善募捐，当总数达到10万元时就结束，
统计此时捐款人数，以及平均每人捐款的树目。
*/
//1. 使用for循环来编程
/*#include <stdio.h>

int main()
{
    int numOfPerson;
    int totalMoney = 0;
    int money;

    for(numOfPerson = 1;numOfPerson <= 1000;numOfPerson++){
        printf("请输入捐款金额：\n");
        scanf("%d",&money);
        totalMoney = totalMoney + money;
        if(totalMoney >= 100000){
            puts("很棒，捐款已经到达10万元");
            break;
        }
    }
    printf("总捐款人数是：%d\n",numOfPerson);
    printf("每个人的平均捐款数据：%f\n",(float)totalMoney/numOfPerson);
    return 0;
}
*/

//使用while循环来编程
#include <stdio.h>

int main()
{
    int numOfPerson = 1;
    int totalMoney = 0;
    int money;

    while(numOfPerson <= 1000){
        printf("请输入捐款金额：\n");
        scanf("%d",&money);
        totalMoney = totalMoney + money;
        if(totalMoney >= 100000){
            puts("很棒，捐款已经到达10万元");
            break;  //用break提前结束循环
        }
        numOfPerson++;
    }

    printf("总捐款人数是：%d\n",numOfPerson);
    printf("每个人的平均捐款数据：%f\n",(float)totalMoney/numOfPerson);
    return 0;
}