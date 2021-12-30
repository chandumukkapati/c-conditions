#include<stdio.h>
void main()
{
	int cp,sp;
	printf("enter the values of cp and sp");
	scanf("%d%d",&cp,&sp);
	if(cp>sp)
	{
		printf("loss");
	
	}
	else if(cp<sp)
	{
		printf("profit");
	}
	else
	{
		printf("no profit no loss");
	}
}
