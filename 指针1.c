#include <stdio.h>

int main()
{
    int a = 1;
    int *p = &a;
    printf("*p=%d\n", *p);
    printf("p[0]=%d\n", p[0]);

    return 0;
}