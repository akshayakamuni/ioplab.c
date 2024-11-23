#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("enter the values of array elements");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("values of array elements\n");
	for(i=0;i<10;i++)
	{
		printf("%d \t\n",a[i]);
	}
	printf("rotation of array\n");
	
	for(i=0;i<1;i++)
	{
		temp=a[9];
		for(j=9;j>0;j--)
		{
			a[j]=a[j-1];
		}
	    a[0]=temp;
	}
	printf("\n");
	printf("after rotation\n");
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
}
