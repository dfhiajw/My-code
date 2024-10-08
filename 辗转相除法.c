#include <stdio.h>

int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int t;
    int m1 = n1, m2 = n2;
    while(n2 != 0){
        t = n1 % n2;
        n1 = n2;
        n2 = t;
    }
    printf("%d和%d之间的最大公约数是:%d", m1, m2, n1);

    return 0;
}