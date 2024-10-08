#include <stdio.h>

int main()
{
// 初始化
    int amount = 0;
    int price = 0;
// 输入
    printf("请输入金额(元)：");
    scanf("%d", &price);

    printf("请输入票面(元):");
    scanf("%d", &amount);
// 计算
    int change = amount - price;
    if(change>0){
    printf("找您%d元。\n", change);
    }else{
        printf("您的钱不够,请你再支付%d元。",-change);
    }   

    return 0;
}