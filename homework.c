/*
��һ��������
y=x��x<1��
y=2x-1(1��x<10)
y=3x-11(x��10)
д��������x��ֵ�����y��Ӧ��ֵ��
*/

#include <stdio.h>

int main()
{
    float x;
    float y;
    printf("����x��ֵ��");
    scanf("%f",&x);
    if(x < 1){
        y=x;
    }else if(x >= 1 && x < 10 ){
        y=2*x-1;
    }else{
        y=3*x-11;
    }
    printf("y=%.2f",y);
    
    return 0;
}