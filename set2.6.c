    
#include<stdio.h>
void main()
{
int a1,b1,flag;
printf("enter the a1 and b1:",a1,b1);
while(a1<b1)
{
int i,flag=0;
for(i=2;i<=a1/2;i++)
{
if(a1%i==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d",&a1);
++a1;
}
return 0;
}
