# include <stdio.h>

int main()
{
    int n, p, p1;
    printf("请输入一个数:");
    scanf("%d", &n);
    p = n;

    int cifang=1;
    while(n>9){
        n = n / 10;
        cifang = cifang * 10;
    }

    do{
        p1 = p / cifang;
        printf("%d ", p1);
        p = p % cifang;
        cifang = cifang / 10;
    } while (cifang>0);

    return 0;
}