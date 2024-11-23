#include<stdio.h>
int main()
{
	int sum=0,a[9],i;
	printf("enter the values");
	for(i=0;i<=9;i++)
	{
	    scanf("%d",&a[i]);
	    sum=sum+a[i];
	}
	printf("%d",sum);
}
