#include<stdio.h>
#include<conio.h>
void main()
{
int n,a[50],sum=0,avg,i;
printf("enter limit");
scanf("%d",&n);
printf("enter number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("avg is");
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("%d",avg);
}
