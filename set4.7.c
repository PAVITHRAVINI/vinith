#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the two numbers");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("%d\t%d",a,b);
}
