#include <stdio.h>

int main()
{
    int score;
    printf("������һ��������");
    scanf("%d",&score);
    if(score >= 85 && score <= 100){
        printf("A��\n");
    }else if(score >=70 && score <= 84){
        printf("B��\n");
    }else if(score >= 60 && score<= 69){
        printf("C��\n");
    }else{
        printf("������\n");
    }

    return 0;
}