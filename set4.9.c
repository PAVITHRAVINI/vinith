#include<stdio.h>
void main()
{
int r[20],i,temp;
printf("enter number");
for(i=1;i<=10;i++)
{
scanf("%d",&r[i]);
}
temp=r[1];
for(i=1;i<=10;i++)
{
if(temp<r[i])
{
temp=r[i];
}
}
printf("%d",temp);
}
