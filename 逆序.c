#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a;
    scanf("%d", &a);
    int b;
    int c;
    int d;
    b = a / 100;
    c = (a % 100) / 10;
    d = (a % 100) % 10;
    printf("%d", d * 100 + c * 10 + b);
    return 0;
}    
