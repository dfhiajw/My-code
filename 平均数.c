#include <stdio.h>

int main(){
    int sum=0;
    int num = 0;
    int n=0;
    do{
        printf("请输入入一个数:");
        scanf("%d", &num);
        if(num!=-1){
        sum = sum + num;
        n++;
        }
    } while (num != -1);
    printf("这%d个数的平均数为：%.2f\n", n, 1.0 * sum / n);
    return 0;
}