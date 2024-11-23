#include <stdio.h>
int main()
{
	int n,max=1,min=1,i;
	printf("enter any number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i>max)
		max=i;
	}
	for(i=1;i<=n;i++)
	{
		if(i<min)
		min=i;
	}
	printf("the maximum of the numbers is %d",max);
	printf("\nthe minimum of the numbers is %d",min);
}
