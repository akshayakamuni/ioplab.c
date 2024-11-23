#include<stdio.h>
int main()
{
	int i=0,N;
	printf("enter the value of N");
	scanf("%d",&N);
	do
	{
		printf("\t%d",i);
		i=i+2;
	}while(i>=0&&i<=N);
}
