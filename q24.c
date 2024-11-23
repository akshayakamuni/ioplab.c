#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	if(n>=4)
	{
		printf("y=1+nx");
	}
	else if(n<=1)
	{
		printf("y=1+nx");
	}
	else if(n==1)
	{
		printf("y=1+x");
	}
	else if(n==2)
	{
		printf("y=1+x/n");
	}
	else if(n==3)
	{
		printf("y=1+pow(x,n)");
	}
	return 0;
}
