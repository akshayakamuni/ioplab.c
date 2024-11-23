#include<stdio.h>
int main()
{
	int num,sum=0,i;
	printf("enter the value of num");
	scanf("%d",&num);
	while(num!=0)
	{
		i=num%10;
		sum=sum+i;
		num=num/10;
	}
	printf("sum of individual digit is %d",q);
}
