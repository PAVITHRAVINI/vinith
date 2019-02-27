#include<stdio.h>
void main()
{
int n,temp=0,a,c;

printf("enter the number");
scanf("%d",&n);
c=n;
while(n>0)
{
a=n%10;
temp=temp*10+a;
n=n/10;
printf("%d\n",temp);
}
if(temp==c)
{
    printf("\npalindrome");
}
else
{
    printf("not a palindrome");
}
}
