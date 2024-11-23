#include <stdio.h>
int main()
{
	int i,n,sum=0;
	while(n>=0)
	{
		printf("enter any number");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("the sum is %d",sum-n);
}
