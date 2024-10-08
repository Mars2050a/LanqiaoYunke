#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {

        printf("1. 阶乘\n2. 判断质数\n3. 判断奇数或偶数\n4. 退出\n");
        int i;
        printf("输入你的选择：");
        scanf("%d",&i);

        switch(i)
        {
            case 1:
            {
                int j,k,num;
                k=1;
                printf("输入一个数：");
                scanf("%d",&num);
                for(j=num;j>=1;j-=1)
                {
                    k*=j;
                }
                printf("%d 的阶乘值为 %d\n",num,k);
                break;
                
            }
            case 2:
            {
                int num,j,k;
                printf("输入一个数：");
                scanf("%d",&num);
                j=2;
                k=1;
                while(j<num)
                {
                    if(num%j==0)
                    {
                        k=0;
                        printf("%d 不是质数\n",num);
                        break;
                    }
                    j++;
                }
                if(k)
                {
                    printf("%d 是质数\n",num);
                }
                break;
                
            }
            case 3:
            {
                int num,j,k;
                printf("输入一个数：");
                scanf("%d",&num);
                if(num%2==0)
                {
                    printf("%d 是偶数\n",num);
                }else{
                    printf("%d 是奇数\n",num);
                }
                break;
                
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("输入错误\n");
                break;
            }


    
        }
    }    
    return 0;
}
