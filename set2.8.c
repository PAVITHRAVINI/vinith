#include<stdio.h>
void main()
{
int n,m,n1,temp=0,r,i;
printf("enter the number");
scanf("%d%d",&n,&m);
for(i=n;i<m;i++)
{
    r=n;
while(n>0)
{
n1=n%10;
temp=temp+(n1*n1*n1);
n=n/10;
}
if(temp==r)
{
printf(" armstrong number");
}
else
{
printf(" not an armstrong");
}
}
}
