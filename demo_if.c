#include <stdio.h>
int main()
{
    int money;
    printf("�������ж���Ǯ��\n");
    scanf("%d",&money);
    //�������100Ԫ������
    if(money > 100)
    {
        printf("��Ǯ��\n");
    }
    puts("̸������");
    printf("���Խ����%d\n",money > 100);
    return 0;
}