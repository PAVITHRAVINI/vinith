#include <stdio.h>
int main(void) 
{
	char str[100];
	int i,count=0;
	printf("enter the sentence:");
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count=count+1;
		}
	}
	printf("\n no of white spaces=%d",count);
	return 0;
}
