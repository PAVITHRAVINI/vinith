#include <stdio.h>

int main()
{
     int r,u,i,j;
	scanf("%d %d",&r,&u);
	for(i=r+1;i<u;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
