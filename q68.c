#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],multi[3][3],i,j;
	printf("enter the elements of a matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf(" values of elements of a matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("enter the elements of b matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("values of the elements of b matrix \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("multi of a and b matrices\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		    
		    for(int k=0;k<3;k++)
		    {
		    	multi[i][j]=0;
		    	multi[i][j]=multi[i][j]+a[i][k]*b[k][j];
			}
		}
		printf("\n");
	}
	printf("multiplication of two matrices");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",multi[i][j]);
		}
	}
}
