#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n<0){
        printf("fu");
        n = -n;
    }
    int cnt=1;
    int x = n;
    while(x>9){
        x /= 10;
        cnt *= 10;
    }
    do{
        int d = n / cnt;
        switch(d){
        case 0:
            printf("ling");
            break;
        case 1:
            printf("yi");
            break;
        case 2:
            printf("er");
            break;
        case 3:
            printf("san");
            break;
        case 4:
            printf("si");
            break;
        case 5:
            printf("wu");
            break;
        case 6:
            printf("liu");
            break;
        case 7:
            printf("qi");
            break;
        case 8:
            printf("ba");
            break;
        case 9:
            printf("jiu");
            break;
        }
        n %= cnt;
        cnt /= 10;
        if(cnt>9){
            printf(" ");
        }
    } while (cnt > 0);  
    return 0;
}