#include <stdio.h>

int main()
{
    int ac[] = {0, 1, 2, 3, 4, 5,-1};
    int *p = &ac[0];
    int *m = &ac[1];
    //
//    printf("%d %d", *p, *m);
    printf("*p=%d\n", p-m);
    printf("*p=%p\n", p);

    return 0;
}