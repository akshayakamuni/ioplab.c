#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=2*(5-i)-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
	
}
