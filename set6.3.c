#include <stdio.h>

int main()
{
    int a,sum=0,r;
    scanf("%d",&a);
    while(a)
    {
        r=a%10;
        a=a/10;
        sum+=r;
    }
    printf("%d",sum);

    return 0;
}
