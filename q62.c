#include<stdio.h>
int main()
{
	int n,a[n],b[n],i;
	printf("enter the size");
	scanf("%d",&n);
	printf("enter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n values of array eleements");
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("reverse of the array\n");
	int temp,j;
	for(i=0;i<n;i++)
	{
		for(j=n-1;j>=0;j--)
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			temp=0;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\n%d",a[i]);
	}
}
