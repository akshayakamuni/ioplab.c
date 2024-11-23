#include<stdio.h>
int main()
{
	int i=1,q,N;
	printf("enter the value of N");
	scanf("%d",&N);
	while(i>=0&&q<=N)
	{
		q=i*i;
		printf("\t%d",q);
		i=i+1;
		
	}
}
