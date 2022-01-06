#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of ");
	scanf("%d%d",&a,&b);
	while(a<b)
	{
		printf("%d ",a);
		a++;
	}
}
