#include <stdio.h>

int main()
{
    int a,b,c,d,sum=0;
    printf("enter the values");
    scanf("%d%d",&a,&b);
    for(c=1;c<=a;c++)
    {
        printf("%d\n",c);
    }
    for(d=1;d<=b;d++)
    {
        sum=sum+d;
    
    }
    printf("%d",sum);

    return 0;
}
