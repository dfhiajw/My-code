#include <stdio.h>
// BMI计算
int main()
{
    float a;
    int b;

    printf("你的身高为(米):");
    scanf("%f", &a);
    printf("你的体重为(kg):");
    scanf("%d", &b);
    float c = a * a;
    float d = b / c;
    printf("你的IBM指数为：%.2f\n", d);
    if (d <= 20)
    {
        printf("你lu太多了，少lu点!\n");
    }
    else if (d > 20 && d <= 25)
    {
        printf("你的身材很好，继续保持\n");
    }
    else if (d > 25 && d <= 30)
    {
        printf("你有点胖了，多注意！\n");
    }
    else
    {
        printf("你lu太少了，多lu点！\n");
    }

    return 0;
}