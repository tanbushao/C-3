/*
��Ŀ��
Ҫ�����100~200֮��Ĳ��ܱ�3��������
*/
//1. ��for��continue��ʵ��
/*#include <stdio.h>

int main()
{
    int data;

    for(data = 100;data <= 200;data++){ 
        if(data %3 == 0){
            continue;
        }
        printf("%d  ",data);

    }
    return 0;
}
*/

//2. ��while��continue�����ʵ��
#include <stdio.h>

int main()
{
    int data = 100;

    while(data <= 200){ 
        if(data %3 == 0){
            data++;
            continue;
        }
        printf("%d  ",data);
        data++;
    }
    return 0;
}

