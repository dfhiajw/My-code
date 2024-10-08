#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n==2){
        printf("%d是素数.",n); // 处理特殊情况
    }else{
        int isPrime = 1; // 定义判断标准
        for (int i = 2; i*i <= n;i++){
            if(n%i==0){
                isPrime = 0;
            }else{
                isPrime = 1;
            }
        }
        if(isPrime==1){
            printf("%d是素数.", n);
        }else{
            printf("%d不是素数.", n);
        }
    }

    return 0;
}