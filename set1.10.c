#include <stdio.h>
 
int main()
{
int p,count=0;
scanf("%d",&p);
while(p!=0)
{
    p=p/10;
    count++;
    
}
    
printf("%d",count);
}
