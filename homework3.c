/*
��Ŀ��
��������������m��n,�������Լ������С������
*/

#include <stdio.h>

// �������ڼ������Լ����GCD��
int gcd(int a,int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// �������ڼ�����С��������LCM��
int lcm(int a,int b){
    return a*b / gcd(a,b);
}

int main()
{
    int m,n;

    printf("����������������\n");
    scanf("%d %d",&m,&n);

    if(m<=0 || n<=0){
        printf("��������ȷ����������\n");
        return 1;
    }

    int gcd_result = gcd(m,n);
    int lcm_result = lcm(m,n);

    printf("��������ǣ�%d\n",gcd_result);
    printf("��С�������ǣ�%d\n",lcm_result);

    return 0;
}