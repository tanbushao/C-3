#include <stdio.h>
int main()
{
    int a;
    int b;
    printf("������a,b��������\n");
    scanf("%d%d",&a,&b);

    if(a==1 && b==0){
        printf("�߼���ɹ�\n");
    }

    if(a==1 || b==0){
        printf("�߼���ɹ�\n");
    }

    if(!a){
        printf("�߼��ǳɹ�\n");
    }


    return 0;
}