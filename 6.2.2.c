#include <stdio.h>

int main()
{
    int n,first=1,N;
    // 读取输入的整数n
    scanf("%d", &n);
    // 将n赋值给N
    N = n;
    // 初始化i为1
    int i = 1;
    // 当n大于1时，循环执行
    while(n>1){
        // 将first乘以10
        first*= 10;
        // n减1
        n--;
    }
    // 将i赋值为first
    i = first;
    // 当i小于first乘以10时，循环执行
    while(i<first*10){
        // 将i赋值给t
        int t = i;
        // 初始化sum为0
        int sum = 0;
        // 当t大于0时，循环执行
        do{
            // 取t的个位数
            int d = t % 10;
            // t除以10
            t /= 10;
            // 将d赋值给p
            int p = d;
            // 初始化j为1
            int j = 1;
            // 当j小于N时，循环执行
            while(j<N){
                // 将p乘以d
                p *= d;
                // j加1
                j++;
            }
            // 将p加到sum中
            sum += p;
        } while (t > 0);
        // 如果sum等于i，则输出i
        if(sum==i){
            printf("%d\n", i);
        }
        // i加1
        i++;
    }
    return 0;
}    
