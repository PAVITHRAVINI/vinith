#include<stdio.h>
void main()
{
int minutes,hour;
printf("enter the minute");
scanf("%d",&minutes);
hour=minutes/60;
minutes=minutes%60;
printf("%d\t%d",hour,minutes);
}
