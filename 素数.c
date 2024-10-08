/*#include <stdio.h>

int main()
{
    int x=2;
    int cnt = 0;
    for (x = 2; cnt < 50;x++)
    {
        int i;
        int isPrime = 1;
        for (i = 2; i < x;i++){
            if(x % i == 0){
                isPrime = 0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d ",x);
            cnt++;
        }
    }
    printf("\n");

    return 0;
}*/




#include <Stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    int isPrime = 1;
    for (int i = 2; i < a;i++){
        if(a%i == 0){
            isPrime = 0;
        }
    }
    if(isPrime == 1){
        printf("%d是素数。", a);
    }else{
        printf("%d不是素数。", a);
    }
    return 0;
}