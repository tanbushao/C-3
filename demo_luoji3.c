#include <stdio.h>
int main()
{
    int haveMoneyOrNot;
    int handsomeOrNot;
    int puTianPYesOrNot;

    puts("����������𣿲��ǵĻ���1���ǿ�0");
    scanf("%d",&puTianPYesOrNot);
    if(!puTianPYesOrNot){
        printf("��Ů����������\n");
        return -1;
    }

    puts("��˧��˧�Ļ���1����˧��0");
    scanf("%d",&handsomeOrNot);

    /*if(haveMoneyOrNot==1 && handsomeOrNot==1){
        printf("��������Ҫ�޸��㣬����\n");
    }
    */
    printf("���׽���\n");
    return 0;
}