#include <stdio.h>

int main(){
    int sum = 0;
    int num = 0;
    int n = 0;
    printf("输入一个数:");
    scanf("%d", &num);
    while(num!=-1){
        sum += num;
        n++;
        printf("再输入一个数:");
        scanf("%d", &num);
    }
    printf("这%d个数的平均数为%.2f\n", n,1.0 * sum / n);
    return 0;
}