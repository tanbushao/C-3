#include <stdio.h>
int main()
{
    int healthyYesOrNot;
    int handsomeYesOrNot;
    int richYesOrNot;
    int daFangYesOrNot;
    puts("������ò�");
    scanf("%d",&healthyYesOrNot);
    if(healthyYesOrNot == 1){
        puts("����Ǯ����˧��˧��tips����������������");
        scanf("%d%d",&richYesOrNot,&handsomeYesOrNot);
        if(richYesOrNot == 1 && handsomeYesOrNot == 1){
            puts("��Ը����һ�Ǯ��");
            scanf("%d",&daFangYesOrNot);
            if(daFangYesOrNot == 1){
                printf("����xx\n");
            }else{
                printf("�Բ����Ҳ���С���������ѣ���Ȼ��˧��Ǯ�����壬�����������лл!\n");
            }
        }else{
            printf("�Բ�����Ҫ��˧��Ǯ��\n");
        }
    }else{
        printf("���ǲ��������ѣ������ܶ�����������\n");
    }

    return 0;
}