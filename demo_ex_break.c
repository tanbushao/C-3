/*
��Ŀ��
��ȫϵ1000ѧ���У���������ļ�裬�������ﵽ10��Ԫʱ�ͽ�����
ͳ�ƴ�ʱ����������Լ�ƽ��ÿ�˾�����Ŀ��
*/
//1. ʹ��forѭ�������
/*#include <stdio.h>

int main()
{
    int numOfPerson;
    int totalMoney = 0;
    int money;

    for(numOfPerson = 1;numOfPerson <= 1000;numOfPerson++){
        printf("���������\n");
        scanf("%d",&money);
        totalMoney = totalMoney + money;
        if(totalMoney >= 100000){
            puts("�ܰ�������Ѿ�����10��Ԫ");
            break;
        }
    }
    printf("�ܾ�������ǣ�%d\n",numOfPerson);
    printf("ÿ���˵�ƽ��������ݣ�%f\n",(float)totalMoney/numOfPerson);
    return 0;
}
*/

//ʹ��whileѭ�������
#include <stdio.h>

int main()
{
    int numOfPerson = 1;
    int totalMoney = 0;
    int money;

    while(numOfPerson <= 1000){
        printf("���������\n");
        scanf("%d",&money);
        totalMoney = totalMoney + money;
        if(totalMoney >= 100000){
            puts("�ܰ�������Ѿ�����10��Ԫ");
            break;  //��break��ǰ����ѭ��
        }
        numOfPerson++;
    }

    printf("�ܾ�������ǣ�%d\n",numOfPerson);
    printf("ÿ���˵�ƽ��������ݣ�%f\n",(float)totalMoney/numOfPerson);
    return 0;
}