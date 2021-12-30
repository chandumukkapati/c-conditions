#include<stdio.h>
void main()
{
	int a;
	printf("enter the value of a");
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}
