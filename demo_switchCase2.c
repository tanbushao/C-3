#include <stdio.h>
int main()
{
    int data;
    char cdata;
    puts("������һ����");
    scanf("%d",&data);
    switch(data){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            puts("������1��2��3��4��5�����");
            break;
        case 6:
            puts("������6�����");
            break;
        case 7:
            puts("������7�����");
            break;
        default:
            puts("�������б��е����");
            break;
    }
    
    printf("������һ���ַ�\n");
    getchar();
    scanf("%c",&cdata);
    switch(cdata){
        case 'a':
            puts("����������a�����");
            break;
        case 'b':
            puts("����������b�����");
            break;
        default:
        puts("�������б��е����");
    }
    
    return 0;
}