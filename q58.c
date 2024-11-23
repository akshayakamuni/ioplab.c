#include<stdio.h>
int main()
{
	int a[9],b[9],sum[9],i;
	printf("enter the a values");
	for(i=0;i<=9;i++)
	{
	    scanf("%d",&a[i]);	
	}
	printf("enter the values\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	printf("enter the b values");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("enter the values\n");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\n");
	printf("the sum of a and b");
	for(i=0;i<=9;i++)
	{
		sum[i]=a[i]+b[i];
		scanf("%d\t",&sum[i]);
	}
	printf("the sum value");
	for(i=0;i<=9;i++)
	{
		
		printf("%d\t",sum[i]);
	}
	printf("\n");
}
