/*
计算从1到00的和
*/

#include <stdio.h>

int main()  //3个表达式
{
    int sum = 0;    //变量最好初始值化成0。编码习惯
    int data =1;    //第一个表达式，条件的初始值

    while (data <= 100){    //第二个表达式，条件的临界值
        printf("data = %d\n",data);
        sum = sum + data;
        data++;     //第三个表达式，条件发生变化
    } 
    printf("0到100的和是：%d\n",sum);

    return 0;
}
 
 