#include<stdio.h>
int main()
{
   
    float bs , da , hra , gp;
    scanf("%f",&bs);
    da = bs * 0.4;
    hra = bs *0.2;
    gp = bs + da + hra;
    printf("Enter Basic Salary of Ramesh: 1200\n");
    printf("Basic Salary of Ramesh = %f\n",bs);
    printf("Dearness Allowance = %f\n",da);
    printf("Dearness Allowance = %f\n",hra);
    printf("Dearness Allowance = %f\n",gp);
    return 0;


}