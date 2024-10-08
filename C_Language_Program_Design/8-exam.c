#include <stdio.h>

int factorial();
int main()
{
    int num;
    printf("请输入一个数：");
    scanf("%d",&num);
    printf("%d 的阶乘为 %d",num,factorial(num));
    return 0;
}
int factorial(int x)
{
    int i=1,result=1;
    while(i<=x)
    {
        result*=i;
        i++;
    }
    return(result);

}
