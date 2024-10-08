/*#include <stdio.h>

int swapa(int a, int b);
int main()
{
    int a = 5, b = 6;
    swapa(a, b);
    printf("a=%d b=%d\n", a, b);
    return 0;
}

int swapa(int a,int b)
{
    int t = a;
    a = b;
    b = t;
}*/

#include <stdio.h>

void cheer(int i)
{
    printf("cheer %d\n", i);
}

int main()
{
    cheer(2.4);

    return 0;4
}