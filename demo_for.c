/*
for(表达式1;表达式2;表达式3)语句
可以改写为while循环的形式：
表达式1
while 表达式2
{
    语句
    表达式3
}
二者无条件等价

举例子：
1.使用while
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
*/

//2.使用for
/*
#include <stdio.h>
int main()
{
    int data;
   //条件赋初值 判断临界值 条件改变
    for(data=0;data<10;data++){     //判断 ==> 执行循环体 ==> 条件改变
        printf("%d\n",data);
        puts("我爱谭小林");  //循环体
    }

    return 0;
}
*/

//省略表达式1和表达式3，但分号要保留
/*
#include <stdio.h>
int main()
{
    int data;
    data = 0;
   //条件赋初值 判断临界值 条件改变
    for(;data<10;){     //判断 ==> 执行循环体 ==> 条件改变
        printf("%d\n",data);
        puts("我爱谭小林");  //循环体
        data++;
    }

    return 0;
}
*/


//死循环
#include <stdio.h>
int main()
{
    int data;
    data = 0;
   //条件赋初值 判断临界值 条件改变
    for(;;){     //判断 ==> 执行循环体 ==> 条件改变
        printf("%d\n",data);
        puts("我爱谭小林");  //循环体
        data++;
    }

    return 0;
}