#include <stdio.h>
int main()
{
    int data1;
    int data2;
    
    printf("��������������\n");
    scanf("%d%d",&data1,&data2);
    if(data1 > data2){
        printf("data������%d\n",data1);
        printf("dataС����%d\n",data2);
    }
    if(data1 < data2){
        printf("data������%d\n",data2);
        printf("dataС����%d\n",data1);
    }
    return 0;
}