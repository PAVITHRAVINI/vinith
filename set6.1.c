#include <stdio.h>
void main()
{
int i,n,n1,a;
printf("enter digits");
scanf("%d",&i);
do
{
n1=i%10;
n=n1/10;
printf("%d",i);
}while(n>0);
}
