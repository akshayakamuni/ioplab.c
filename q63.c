#include <stdio.h>
int main() 
{
	int a[3][3],max,min;
	printf("enter the a matrix");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("values of a matrix");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("\n%d\t",a[i][j]);
		}
		printf("\n");
	}
	max=a[0][0];
	min=a[0][0];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		   if(a[i][j]<min)
		   min=a[i][j];
		   if(a[i][j]>max)
		   max=a[i][j];
		   	
		}
    }
    printf("min is %d",min);
    printf("\nmax is %d",max);
}
