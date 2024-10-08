#include <stdio.h>
int divide(int a, int b);
int main()
{
    int a = 5;
    int b = 0;
    int c;
    if(divide(a,b)){
        printf("%d/%d=%d\n", a, b, c);
    }else{
        printf("错误,除数不能为0.");
    }

    return 0;
}

int divide(int a,int b)
{
    int ret = 1;
    if(b==0){
        ret = 0;
    }else{
        ret = 1;
    }
    return ret;
}