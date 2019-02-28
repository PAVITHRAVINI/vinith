#include<stdio.h>
int main()
{
int p,i,q;
printf("enter the number");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
q=p*i;
printf("%d\t",q);
}
return 0;
}
