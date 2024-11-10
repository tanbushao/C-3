/*
题目：
输入两个正整数m和n,求其最大公约数和最小公倍数
*/

#include <stdio.h>

// 函数用于计算最大公约数（GCD）
int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 函数用于计算最小公倍数（LCM）
int lcm(int a,int b){
    return a*b / gcd(a,b);
}

int main()
{
    int m,n;

    printf("请输入两个正整数\n");
    scanf("%d %d",&m,&n);

    if(m<=0 || n<=0){
        printf("请输入正确的正整数。\n");
        return 1;
    }

    int gcd_result = gcd(m,n);
    int lcm_result = lcm(m,n);

    printf("最大公因数是：%d\n",gcd_result);
    printf("最小公倍数是：%d\n",lcm_result);

    return 0;
}