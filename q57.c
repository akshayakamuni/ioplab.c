#include<stdio.h>
int main()
{
	int n,a[n],max1,max2,i;
	printf("enter the value of n");
	scanf("%d",&n);
	printf("enter the values into array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array values are \t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	max1=a[0];
	max2=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max1)
		{
			max1=a[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>max2 && a[i]<max1)
		{
			max2=a[i];
		}
	}
	printf("first max=%d",max1);
	printf("second max=%d",max2);
}
