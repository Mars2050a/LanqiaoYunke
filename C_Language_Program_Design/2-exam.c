#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float p,s;
    scanf("%d %d %d", &a, &b,&c);
    p=0.5*(a+b+c);
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("Enter sides of a triangle: %d %d %d\n",a,b,c);
    printf("Area of triangle = %f",s);
    return 0;
}