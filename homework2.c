/*
����һ�ٷ��Ƴɼ���Ҫ������ɼ��ȼ�'A'��'B'��'C'��'D'��'E'��
90������Ϊ'A',80~89��Ϊ'B',70~79��Ϊ'C',60~69��Ϊ'D',60������Ϊ'E'��
*/

#include <stdio.h>

int main()
{
    int score;

    printf("�����������");
    scanf("%d",&score);

    switch (score/10){
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("�ɼ��ȼ�Ϊ��E\n");
        break;
    case 6:
        printf("�ɼ��ȼ�Ϊ��D\n");
        break;
    case 7:
        printf("�ɼ��ȼ�Ϊ��C\n");
        break;
    case 8:
        printf("�ɼ��ȼ�Ϊ��B\n");
        break;
    case 9:
    case 10:
        printf("�ɼ��ȼ�Ϊ��A\n");
        break;
    default:
        printf("�ɼ��Ƿ�\n");
        break;
    }

    printf("done!\n");

    return 0;
}