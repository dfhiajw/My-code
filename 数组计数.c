#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);
    int number[10]={0};
    while(x!=-1){
        if(x>=0 && x<=9){
            number[x]++;
        }
        scanf("%d", &x);
    }
    for (int i = 0; i < 10;i++){
        printf("%d %d\n", i, number[i]);
    }

    return 0;
}