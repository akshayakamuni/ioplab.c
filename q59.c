#include<stdio.h>
int main()
{
	int a[9],b[9],i;
	printf("enter the values of a array");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the values of b array");
	for(i=0;i<=9;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<=9;i++)
	{
	a[i]=a[i]+b[i];
	b[i]=a[i]-b[i];
	a[i]=a[i]-b[i];
	
printf("\n%d",a[i]);
	printf("\n%d",b[i]);
}
}
