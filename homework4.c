/*
题目：水仙花数
什么是水仙花数？
水仙花数（也称为阿姆斯特朗数）是指一个?位数，其各位数字的n次方之和等于该数本身。
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num,digit,sum;
    printf("三位数中的水仙花数有:");

    for(num = 100;num < 1000;num++){
        int temp = num;
        sum = 0;
        
        // 计算每一位的三次方之和  
        while(temp > 0){
            digit = temp % 10;// 获取最后一位数字
            sum += pow(digit,3);// 计算该位的三次方
            temp /= 10;// 去掉最后一位数字
        }
        if(num == sum){
            printf("%d ",num);// 输出水仙花数
        }

    }

    return 0;
}