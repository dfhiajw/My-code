#include <stdio.h>
int main()
{
    int fenzi, fenmu;
    scanf("%d/%d", &fenzi, &fenmu);
    int min,max=1;
    if(fenzi<fenmu){
        min = fenzi;
    }else{
        min = fenmu;
    }
    for (int i = 1; i <= min;i++){
        if(fenzi%i==0){
            if(fenmu%i==0){
                max = i;
            }
        }
    }
    fenzi /= max;
    fenmu /= max;
    printf("%d/%d", fenzi,fenmu);
    return 0;
}