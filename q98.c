#include<stdio.h>
#include<conio.h>
int main()
{
	int *a[10],*b[10],j,i,*c[10],k;
	printf("dynamic memory allocation\n");
	for(i=0;i<3;i++)
	{
		a[i]=(int*)malloc(3*sizeof(int));
		b[i]=(int*)malloc(3*sizeof(int));
		c[i]=(int*)malloc(3*sizeof(int));
	}
	printf("enter the a matrice elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",(*(a+i)+j));
	    }
	}
	printf("\n vales of a matrice elemeents");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		   printf("%d\t",*(*(a+i)+j));	
		}
		printf("\n");
	}
	printf("enter the b matrice elememts\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("\n values of b matrice elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(b+i)+j));
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j]=c[i][j]+(*(*(a+i)+k))*(*(*(b+k)+j));
			}
		}
	}
	printf("multiplication of the mtrices a and b\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(c+i)+j));
		}
		printf("\n");
	}
}
