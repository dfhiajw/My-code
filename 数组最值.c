#include <stdio.h>
void minmax(int *a, int b, int *min, int *max);

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int min, max;
    printf("a=%d\n", a[0]);
    minmax(a, sizeof(a) / sizeof(a[0]), &min, &max);
    printf("a=%d\n", a[0]);
    printf("min=%d\nmax=%d\n", min, max);

    return 0;
}

void minmax(int *a, int len, int *min, int *max)
{
    int i;
//    a[0] = 1000;
    *min = *max = a[0];
    for (i = 0; i < len; i++)
    {
        if (a[i] < *min)
        {
            *min = a[i];
        }
        else if (a[i] > *max)
        {
            *max = a[i];
        }
    }
}