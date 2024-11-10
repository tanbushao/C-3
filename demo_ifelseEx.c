#include <stdio.h>
int main()
{
    int healthyYesOrNot;
    int handsomeYesOrNot;
    int richYesOrNot;
    int daFangYesOrNot;
    puts("你身体好不");
    scanf("%d",&healthyYesOrNot);
    if(healthyYesOrNot == 1){
        puts("你有钱不，帅不帅（tips：输入两个整数）");
        scanf("%d%d",&richYesOrNot,&handsomeYesOrNot);
        if(richYesOrNot == 1 && handsomeYesOrNot == 1){
            puts("你愿意给我花钱吗");
            scanf("%d",&daFangYesOrNot);
            if(daFangYesOrNot == 1){
                printf("亲亲xx\n");
            }else{
                printf("对不起，我不跟小气鬼做朋友，虽然你帅有钱有身体，但是请滚蛋，谢谢!\n");
            }
        }else{
            printf("对不起，我要又帅有钱的\n");
        }
    }else{
        printf("我们不能做朋友，身体差，很多事情做不了\n");
    }

    return 0;
}