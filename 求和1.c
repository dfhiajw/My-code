#include <stdio.h>

int main()
{
    int n, b;
    scanf("%d %d", &n, &b);
    int sum = 0;
    int i,t=0;
    for (i = 1; i <= b;i++){
        t = t * 10 + n;
        sum = sum + t;
    }
    printf("%d",sum);

    return 0;
}