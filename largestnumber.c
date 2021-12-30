#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		printf("%d",a);
	}
	else if(a<b)
	{
		printf("%d",b);
	}
	else
	{
		printf("a=b");
	}
}
