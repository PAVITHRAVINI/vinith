#include<stdio.h>
int main()
{
int p,i,q;
printf("enter the number");
scanf("%d",&p);
for(i=1;i<=p;i++)
{
q=p*i;
printf("%d*%d=%d\t\n",p,i,q);
}
return 0;
}
