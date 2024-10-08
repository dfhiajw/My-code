#include <stdio.h>
int main()
{
    int fenzi, fenmu;
    scanf("%d/%d", &fenzi, &fenmu);
    int t;
    int a = fenzi;
    int b = fenmu;                                                                                                                                                         
    while(fenmu!=0){
        t = fenzi % fenmu;
        fenzi = fenmu;
        fenmu = t;
    }
    
    printf("%d/%d", a/fenzi,b/fenzi);
    return 0;
}