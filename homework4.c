/*
��Ŀ��ˮ�ɻ���
ʲô��ˮ�ɻ�����
ˮ�ɻ�����Ҳ��Ϊ��ķ˹����������ָһ��?λ�������λ���ֵ�n�η�֮�͵��ڸ�������
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int num,digit,sum;
    printf("��λ���е�ˮ�ɻ�����:");

    for(num = 100;num < 1000;num++){
        int temp = num;
        sum = 0;
        
        // ����ÿһλ�����η�֮��  
        while(temp > 0){
            digit = temp % 10;// ��ȡ���һλ����
            sum += pow(digit,3);// �����λ�����η�
            temp /= 10;// ȥ�����һλ����
        }
        if(num == sum){
            printf("%d ",num);// ���ˮ�ɻ���
        }

    }

    return 0;
}