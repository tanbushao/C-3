/*
题目：输入以下4*5的矩阵：
1   2   3   4   5
2   4   6   8  10
3   6   9  12  15
4   2  12  16  20
*/


#include <stdio.h>

int main()
{
    int i;
    int j;
    
    for(i=1;i<=4;i++){
        for(j=1;j<=5;j++){
            printf("%3d",i*j);//在%d前添加一个宽度（比如%2d或%3d），这样输出的每个数字都会占据相同的宽度位置。从而对齐输出
        }
        
        printf("\n");
    }

    return 0;
}