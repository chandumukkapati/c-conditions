#include<stdio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	for(a;a<=b;a++)
{
	if(a%2!=0)
	{
		printf("%d ",a);
	}
}
}
