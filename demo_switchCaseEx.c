/*
��Ŀ��ʹ��switch case��ʵ�֣�ѧ���ɼ����ࡣ
85������Ϊ��A�ȡ���70~84��Ϊ��B���ȣ�60~69��Ϊ��C����
*/

#include <stdio.h>

int main()
{
    int score;
    printf("������ѧ���ɼ���");
    scanf("%d",&score);
    switch(score/10){
        case 10:                  //���ɼ�Ϊ100��
        case 9:                   //90~99��
            printf("A��\n");
            break;
        case 8:
            if(score >=85)        //�ж�85~89��ΪA��
                printf("A��\n");
            else                  //80~84��ΪB��
                printf("B��\n");
            break;
        case 7:                   //70~79��
            printf("B��\n");
            break;
        case 6:                   //60~69��
            printf("C��\n");
            break;
        default:                  //0~59��
            printf("������\n");
            break;
    }

    puts("done!");
    return 0;
}