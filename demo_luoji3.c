#include <stdio.h>
int main()
{
    int haveMoneyOrNot;
    int handsomeOrNot;
    int puTianPYesOrNot;

    puts("你是莆田的吗？不是的话扣1，是扣0");
    scanf("%d",&puTianPYesOrNot);
    if(!puTianPYesOrNot){
        printf("好女不嫁莆田男\n");
        return -1;
    }

    puts("你帅吗？帅的话扣1，不帅扣0");
    scanf("%d",&handsomeOrNot);

    /*if(haveMoneyOrNot==1 && handsomeOrNot==1){
        printf("哇塞，我要嫁给你，大叔\n");
    }
    */
    printf("相亲结束\n");
    return 0;
}