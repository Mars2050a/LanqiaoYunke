#include<stdio.h>
int main()
{
int cost,selling;
float earn,loss;
scanf("%d %d",&cost,&selling);
printf("Enter cost price and selling price: %d %d\n",cost,selling);
if (cost>=selling)
{
    loss=cost-selling;
    printf("The seller earn or loss ￥%f",(float)loss);
}   
else
{
    earn=selling-cost;
     printf("The seller earn or loss ￥%f",(float)earn);
     
}
return 0;
}
