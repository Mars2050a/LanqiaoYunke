#include <stdio.h>
int main()
{
    int i=2;
    int j,k;
    printf("输出 1 ~ 300 间质数 :\n");
    printf("1       ");
    while(i<=300)
    {
        j=2;
        k=1;
        while(j<i)
        {
            if(i%j==0)
            {
                k=0;
                break;
            }
             j++;
        }
        if(k){
            printf("%d       ",i);
        }
        i++;
    }
    return 0;
}