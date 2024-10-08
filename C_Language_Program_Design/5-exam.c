#include <stdio.h>
int main()
{
    int num = 1;
    int time;
    float income;
    while (num++ <= 10 )
    {
        scanf("请输入工作时长（小时） ： %d\n",&time);
        if (time >= 40)
        {
            income = 12.000000 * (time - 40);
            printf("工作 %d 小时 加班工资为 %f",time, income);
        }
    }
    return 0;
}