#include<stdio.h>
int main()
{
	int i,j,k,x=1;
	for(i=0;i<5;i++)
	{
		for(j=4;j>i;j--)
		{
			printf(" ");
		}
		for(k=0;k<x;k++)
		{
			printf("*");
		}
		x=x+2;
		printf("\n");
	}
}
