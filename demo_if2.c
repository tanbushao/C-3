#include <stdio.h>
int main()
{
    int atHomeYesOrNo;
    puts("你在家吗？，1在家，0不在家");
    scanf("%d",&atHomeYesOrNo);
    if (atHomeYesOrNo == 1){//==才是判断，一个等号，编译能过，但是。。，if（）括号的内容终究会转换成0，1  是1（ture）
                            //才会执行大括号中的代码语句。
        puts("扑倒你");
        puts("xx");
    }
    return 0;
}