#include<stdio.h>
void main()
{
	int i,n,product=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		product=product*i;
	}
	{
		printf("%d ",product);
	}
}
