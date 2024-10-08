#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int i;
    int cnt = 0;
    int sum = 0;
    for (i = a; i <= b;i++){
        int isPrime = 1;
        int x;
        for (x = 2; x *x<= i; x++)
        {
            if(i%x==0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            cnt++;
            sum += i;
        }
    }
    printf("%d %d\n", cnt, sum);
    return 0;
}