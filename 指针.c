#include <stdio.h>
void num(int *pa, int *pb);
int main()
{
    int a = 5;
    int b = 6;
    num(&a, &b);
    printf("a=%d\nb=%d\n", a, b);

    return 0;
}

void num(int *pa,int *pb){
    int t = *pa;
    *pa = *pb;
    *pb = t;
}