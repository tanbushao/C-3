#include <stdio.h>
int main()
{
    int haveMoneyOrNot;
    int handsomeOrNot;
    int puTianPYesOrNot;

    puts("����Ǯ���еĻ���1��û�п�0");
    scanf("%d",&haveMoneyOrNot);
    
    puts("��˧��˧�Ļ���1����˧��0");
    scanf("%d",&handsomeOrNot);

    if(haveMoneyOrNot==1 && handsomeOrNot==1){
        printf("��������Ҫ�޸��㣬����\n");
    }else{
        printf("��û�л�����\n");
    }
    printf("���׽���\n");
    return 0;
}