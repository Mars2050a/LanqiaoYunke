#include <stdio.h>
#include <math.h>

void stats(int *sum, int *average, double *std);

int main()
{
    int sum,average;
    double std;
    stats(&sum, &average, &std);
    printf("和为%d\n", sum);
    printf("平均值为%d\n", average);
    printf("标准差为%f\n", std);
    return 0;
}

void stats(int *sum, int *average, double *std)
{
    int a, b, c, d, e;
    double cigma = 0;
    printf("请输入5个数：");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    int array[5] = {a, b, c, d, e};
    *sum = a + b + c + d + e;
    *average = (double)*sum / 5; 
    for (int i = 0; i < 5; i++)
    {
        cigma += pow((array[i] - *average), 2);
    }
    *std = sqrt(cigma / 4);  
}
