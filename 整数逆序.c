#include <stdio.h>

int main(){
    int x;
    printf("请输入一个正整数:");
    scanf("%d", &x);

    int step;
    int ret = 0;

    while(x>0){
        step = x % 10;
        x /=10 ;
        ret = ret * 10 + step;
        printf("x=%d,step=%d,ret=%d\n",x,step, ret);
    }
    printf("逆序数为%d", ret);
    return 0;
}