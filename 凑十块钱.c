#include <stdio.h>

int main()
{
    int x;
    printf("请输入总钱数(元):");
    scanf("%d", &x);
    int one, two, five;
    if(x<=50){
        for (one = 1; one <= x * 10;one++){
            for (two = 0; two <= x * 10 / 2;two++){
                for (five = 0; five <=x * 10 / 5;five++){
                    if(one+two*2+five*5==x*10){
                        printf("可以用%d个1角，%d个两角和%d个伍角得到%d元。\n", one, two, five, x);
                    }
                }
            }
        }
    }else{
        printf("你输入的数不合理。\n");
        return 0;
    }
    return 0;
}