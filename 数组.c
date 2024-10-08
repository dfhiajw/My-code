#include <stdio.h>
int main()
{
    int number[100];
    int cnt = 0;
    double sum=0;
    int x;
    scanf("%d", &x);
    do{
        number[cnt] = x;
        sum += x;
        cnt++;
        scanf("%d", &x);
    } while ( x != -1);
    printf("平均值为:\n%.2f\n", sum / cnt);
    printf("其中大于平均值的数有:\n");
    for (int i = 0; i < cnt;i++){
        if(number[i]>sum/cnt){
        printf("%d ", number[i]);
        }
    }
    

    return 0;
}