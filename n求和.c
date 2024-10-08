#include <stdio.h>
 int main()
 {
     int n;
     int i;
     double sum=0.0;
     printf("输入一个数: ，计算n项和\n");
     scanf("%d", &n);

     for (i = 1; i <= n;i++){
         sum =sum+ 1.0 / i;
     }
     printf("结果是:%f", sum);
     return 0;
 }