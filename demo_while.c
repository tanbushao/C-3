#include <stdio.h>

int main()
{
    int times;
    times = 10;

    while (times){  //while(times)�����������times�Ƿ�Ϊ���㣬ֻҪtimes��Ϊ0����������ͳ�����whileѭ����һֱִ��
                    //������ѭ������һ���̶��������˳���������c51��Ƭ������
        puts("�Ұ���");
        printf("%d\n",times);
        times = times - 1;
    }
    
    return 0;
}

