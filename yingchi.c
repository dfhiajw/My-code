#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    float b = a / 100.0;
    int inch;
    int foot;
    foot = b / 0.3048;
    inch = (b / 0.3048 - foot) * 12;
    printf("%d %d", foot, inch);

    return 0;
}