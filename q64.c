#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the atrice");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n matrice");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t %d",a[i][j]);
		}
		
		printf("\n");
	}
	for(i=0;i<3;++i)
	{
		for(j=0;j<3;++j)
		{
			sum=sum+a[i][j];
		}
		printf("sum of %d row=%d\n",i,sum);
		sum=0;
	}
	
}
