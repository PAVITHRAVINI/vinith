
#include<stdio.h>
int main()
{
	int r[10],i,j,n,temp;
	printf("enter the number");
	scanf("%d",&n);
	printf("list of element");
	for(i=0;i<n;i++)
	{
	    scanf("%d",&r[i]);
	}
	for(i=0;i<n-1;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(r[i]>r[j])
	        {
	        temp=r[i];
	        r[i]=r[j];
	        r[j]=temp;
	        }
	}
	}
	printf("sorted list \n");
	for(i=0;i<n;i++)
	{
	    printf("%d",r[i]);
	}
	return 0;
}
