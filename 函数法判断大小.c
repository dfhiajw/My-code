#include <stdio.h>

int max(int a, int b);

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d和%d两者中较大的那个数为:%d", a, b, max(a, b));
    return 0;
}

int max(int a, int b)
{
    int maxium;
    if (a > b)
    {
        maxium = a;
    }
    else
    {
        maxium = b;
    }
    return maxium;
}
