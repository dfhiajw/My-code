#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cnt=0;
    int f;

    double fenzi = 2.0;
    double fenmu = 1.0;
    double sum=0.0;

    do{
        sum = sum + fenzi / fenmu;
        f = fenmu;
        fenmu = fenzi;
        fenzi = fenzi+f;
        cnt++;
    } while (cnt < n);
    printf("%.2f", sum);
    return 0;
}