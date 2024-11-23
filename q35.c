#include<stdio.h>
int main()
{
	int n,i,sum=0,q,tem=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		i=n%10;
		sum=sum+i;
		n=n/10;
	}
	while(sum!=0)
	{
		q=sum%10;
		tem=tem+q;
		sum=sum/10;
	}
	printf("%d",tem);
}
