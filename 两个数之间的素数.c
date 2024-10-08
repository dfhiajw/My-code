#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int max, min;
    if (a < b){
        min = a;max = b;
    }else if (a > b){
        min = b;max = a;
    }else if (a == b){
        printf("你输入的两个数不能相等。");
        return 1;
    }
    min = min + 1;
    int isPrime = 1;
    int i;
    for ( i = min; i < max; i++){
        for (int d = 2; d*d<= i; d++){
            if (i % d == 0){
                isPrime = 0;
                break;
            }
            else{
                isPrime = 1;
            }
        }
        if (isPrime == 1){
            printf("%d ", i);
        }
    }
    
    return 0;
}