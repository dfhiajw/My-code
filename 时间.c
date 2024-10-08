#include <stdio.h>

int main(){
    int a;
    int b;
    int c;
    scanf("%d %d %d", &a, &b,&c);
    int d = a * 60 + b + c;
    a = d/60;
    b = d%60;
    printf("%d %d", a, b);
    return 0;
}