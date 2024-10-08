#include<stdio.h>
int rsum(int n);
int main()
{
    int n;
    printf("请输入一个五位数的正整数: ");
    scanf("%d",&n);
    printf("五位数之和为 %d\n",rsum(n));
    return 0;
}

int rsum(int n)
{
    int a,b,c,d,e;
    if(n<=10)
    {
        return n;
    }else{
        return n%10+rsum(n/10);
    }
}