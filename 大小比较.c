#include <stdio.h>

int main(){
    int a;
    int b;

    scanf("%d %d", &a, &b);
    if(a>b){
        printf("两者中的较大值为%d", a);
    }else{
        printf("两者中的较小值为%d", a);
    }
    return 0;
}
