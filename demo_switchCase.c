#include <stdio.h>
int main()
{
    int data;
    puts("������һ����");
    scanf("%d",&data);
    switch(data){
        case 1:
            puts("����������1�����");
            break;
        case 2:
            puts("����������2�����");
            break;
        case 3:
            puts("����������3�����");
            break;
        case 4:
            puts("����������4�����");
            break;
        default:
            puts("�������б��е����");
            break;
    }


    return 0;
}