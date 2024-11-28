#include<stdio.h>
int main()
{
	int r,c,i,j;
	printf("enter the values of r and c");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("enter a matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   scanf("%d",&a[i][j]);	
		}
	}
	printf("values of elements in a matrix\n");
	for( i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   printf("%d\t",a[i][j]);	
		}
		printf("\n");
	}
	printf("the transpose of matrix");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		   int temp=a[i][j];
		   a[i][j]=a[j][i];
		   a[j][i]=temp;
		   printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

}
